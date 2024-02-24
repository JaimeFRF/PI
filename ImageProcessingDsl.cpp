#include "ImageProcessingDsl.h"

namespace ImageProcessingDsl {

    Image::Image(std::string path) {
        this->image = cv::imread(path);
        if (image.empty()) {
            throw std::runtime_error("Could not open or find the image");
        }
    }

    Image::Image(cv::Mat img) {
        this->image = img;
    }

    int Image::getId() {
        return id;
    }

    Image Image::resizeImage(int width, int height) {
        cv::Mat resizedImage;
        cv::resize(image, resizedImage, cv::Size(width, height));
        return Image(resizedImage);
    }

    Image Image::flipImage(int flipCode) {
        cv::Mat flippedImage;
        cv::flip(image, flippedImage, flipCode);
        return Image(flippedImage);
    }

    Image Image::rotateImage(double angle) {
        cv::Point2f center((image.cols-1)/2.0, (image.rows-1)/2.0);
        cv::Mat rot = cv::getRotationMatrix2D(center, angle, 1.0);
        cv::Mat rotatedImage;
        cv::warpAffine(image, rotatedImage, rot, image.size());
        return Image(rotatedImage);
    }

    cv::Mat Image::getImage() const {
        return this->image;
    }

    void Image::setImage(cv::Mat img) {
        this->image = img;
    }

    void Image::showImage() const {
        cv::imshow("Image", image);
        cv::waitKey(0);
        cv::destroyAllWindows();
    }

    Image Image::operator+(const Image &other) {
        cv::Mat resultImage;
        cv::Mat tmp = this->getImage();
        cv::resize(tmp, tmp, other.getImage().size());
        cv::add(tmp, other.getImage(), resultImage);
        return Image(resultImage);
    }

    Image Image::operator-(const Image &other) {
        cv::Mat resultImage;
        cv::Mat tmp = this->getImage();
        cv::resize(tmp, tmp, other.getImage().size());
        cv::subtract(tmp, other.getImage(), resultImage);
        return Image(resultImage);
    }

    Image Image::operator*(const Image &other) {
        cv::Mat resultImage;
        cv::Mat tmp = this->getImage();
        cv::resize(tmp, tmp, other.getImage().size());
        cv::multiply(tmp, other.getImage(), resultImage);
        return Image(resultImage);
    }

    Image::~Image() {}

    ImageOperation::~ImageOperation() {}

    cv::Mat Binarization::execute(const Image &input) const {
        cv::Mat grayImage;
        cv::cvtColor(input.getImage(), grayImage, cv::COLOR_BGR2GRAY);
        return grayImage;
    }

    Blur::Blur(int mode, cv::Size size, double sigma) {
        if(size.width <= 0 || size.height <= 0){
            throw std::invalid_argument("Invalid size. Must be Positive");
        }else if(size.width % 2 == 0 || size.height % 2 == 0){
            throw std::invalid_argument("Invalid size. Must be odd");
        }
        this->size = size;
        this->sigma = sigma;
        this->mode = mode;
        this->ksize = ksize;
    }

    Blur::Blur(int mode, int ksize) {
        if (mode != MEDIAN_BLUR) {
            throw std::invalid_argument("Invalid mode for this constructor");
        }
        this->mode = mode;
        this->ksize = ksize;
    }

    Blur::Blur(int mode, int kzise, int sigma) {
        if (mode != BILATERAL_BLUR) {
            throw std::invalid_argument("Invalid mode for this constructor");
        }
        this->mode = mode;
        this->ksize = ksize;
        this->sigma = sigma;
    }

    cv::Mat Blur::execute(const Image &input) const {
        cv::Mat blurredImage;
        if(mode == GAUSSIAN_BLUR){
            cv::GaussianBlur(input.getImage(), blurredImage, size, sigma);
        }else if(mode == MEDIAN_BLUR){
            cv::medianBlur(input.getImage(), blurredImage, ksize);
        }else if(mode == BILATERAL_BLUR){
            cv::bilateralFilter(input.getImage(), blurredImage, ksize, sigma, sigma);
        }
        return blurredImage;
    }

    Threshold::Threshold(double threshold, double maxVal, int type) {
        this->threshold = threshold;
        this->maxVal = maxVal;
        this->type = type;
    }

    cv::Mat Threshold::execute(const Image &input) const {
        cv::Mat thresholdedImage;
        cv::threshold(input.getImage(), thresholdedImage, threshold, maxVal, type);
        return thresholdedImage;
    }

    Countor::Countor(int mode, int method, cv::Scalar color) {
        this->mode = mode;
        this->method = method;
        this->color = color;
    }

    void Countor::findContours(const Image &input, std::vector<std::vector<cv::Point>> *contours, std::vector<cv::Vec4i> *hierarchy) const {
        cv::findContours(input.getImage(), *contours, *hierarchy, mode, method);
    }

    cv::Mat Countor::drawContours(const Image &input, const std::vector<std::vector<cv::Point>> &contours) const {
        cv::Mat drawing = input.getImage().clone();
        cv::drawContours(drawing, contours, -1, color, 2);
        return drawing;
    }

    cv::Mat Countor::execute(const Image &input) const {
        ImageProcessingDsl::Binarization binarization;
        ImageProcessingDsl::Threshold threshold;    
        Image binarizedImage = binarization.execute(input);
        Image thresholdedImage = threshold.execute(binarizedImage);
        
        std::vector<std::vector<cv::Point>> contours;
        std::vector<cv::Vec4i> hierarchy;

        findContours(thresholdedImage,  &contours, &hierarchy); 
        cv::Mat drawing = drawContours(input, contours);                    
        return drawing;
    }

    std::string TextRecognition::execute(const cv::Mat &input) const {
        cv::Mat gray, binary;
        cv::cvtColor(input, gray, cv::COLOR_BGR2GRAY);
        cv::threshold(gray, binary, 0, 255, cv::THRESH_BINARY | cv::THRESH_OTSU);

        tesseract::TessBaseAPI ocr;
        ocr.Init(NULL, "eng", tesseract::OEM_LSTM_ONLY);
        ocr.SetVariable("user_defined_dpi", "300");
        ocr.SetImage(binary.data, binary.cols, binary.rows, 1, binary.step);

        std::string outText = ocr.GetUTF8Text();
        return outText;
    }


    void TextRecognition::printText(const std::string input){
        std::cout << "\n" <<  input << std::endl;
    }
    

    Dsl::Dsl() {}

    cv::Mat Dsl::applyOperation(const Image &input, const ImageOperation &operation) const {
        return operation.execute(input);
    }
}