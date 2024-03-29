#include <iostream>
#include <fstream>          
#include "antlr4-runtime.h" 
#include "myDslLexer.h"     
#include "myDslParser.h"        
#include "../generated/myDslBaseListener.h"
#include "..//headers//myListener.h"
#include <cstdlib> 

using namespace ImageProcessingDsl;
using namespace antlr4;
using namespace std;

extern string operationCode;

string cCode = R"(
#include <opencv2/opencv.hpp>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <string>
#include <vector>

using namespace std;



#define GAUSSIAN_BLUR 1
#define MEDIAN_BLUR 2
#define BILATERAL_BLUR 3

class Image;
class ImageOperation;
class Binarization;
class Blur;
class Threshold;
class Countor;
class Dsl;

class Image {
    private:
        int id;
        cv::Mat image;
    public:
        Image(std::string path);
        Image(cv::Mat img);
        int getId();
        Image resizeImage(int width, int height);
        Image flipImage(int flipCode);
        Image rotateImage(double angle);
        cv::Mat getImage() const;
        void setImage(cv::Mat img);
        void showImage() const;
        Image operator+(const Image &other);
        Image operator-(const Image &other);
        Image operator*(const Image &other);
        ~Image();
};

class ImageOperation {
    public:
        virtual cv::Mat execute(const Image &inputs) const = 0; 
        virtual ~ImageOperation();
};

class Binarization : public ImageOperation {
    public:
        cv::Mat execute(const Image &input) const;
};

class Blur : public ImageOperation {
    private:
        cv::Size size;
        double sigma;
        int mode;
        int ksize;
    public:
        Blur(int mode, cv::Size size = cv::Size(5, 5), double sigma = 0);
        Blur(int mode, int ksize);
        Blur(int mode, int kzise, int sigma);
        cv::Mat execute(const Image &input) const;
};

class Threshold : public ImageOperation {
    private:
        double threshold;
        double maxVal;
        int type;
    public:
        Threshold(double threshold = 0, double maxVal = 255, int type = cv::THRESH_BINARY_INV | cv::THRESH_OTSU);
        cv::Mat execute(const Image &input) const;
};

class Countor : public ImageOperation {
        private:
            int mode;
            int method;
            cv::Scalar color;
        public:
            Countor(int mode = cv::RETR_EXTERNAL, int method = cv::CHAIN_APPROX_SIMPLE, cv::Scalar color = cv::Scalar(0, 0, 255));
            void findContours(const Image &input, std::vector<std::vector<cv::Point>> *contours, std::vector<cv::Vec4i> *hierarchy) const;
            cv::Mat drawContours(const Image &input, const std::vector<std::vector<cv::Point>> &contours) const;
            cv::Mat execute(const Image &input) const;
};

class TextRecognition{
    public:
        std::string execute(const cv::Mat &input) const;
        void printText(const std::string input);
};

class Dsl {
    public:
        Dsl ();
        Image* applyOperation(const Image &input, const ImageOperation &operation) const;
};



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
    Binarization binarization;
    Threshold threshold;    
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

Image* Dsl::applyOperation(const Image &input, const ImageOperation &operation) const {
    return new Image(operation.execute(input));
}


)";

int main(){

    Dsl dsl;

    ifstream inputFile ("input.txt");            
    ANTLRInputStream input(inputFile);          

    myDslLexer lexer(&input);                   
    CommonTokenStream tokens(&lexer);           
                                                
    myDslParser parser(&tokens);                
    myDslParser::DslContext* ast = parser.dsl(); 
                                                
    MyListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, ast);

    cCode += operationCode + "\nreturn 0;\n};";

    std::ofstream tempFile("temp_code.cpp");
    if (tempFile.is_open()) {
        tempFile << cCode << std::endl;
        tempFile.close();
    } else {
        return 1; // Return error code
    }

    string compileCommand = "g++ temp_code.cpp -o temp_executable ";
    compileCommand += "$(pkg-config --cflags --libs opencv4) "; 
    compileCommand += "-ltesseract -llept"; 

    int compileResult = system(compileCommand.c_str());

    if (compileResult == 0) {
        cout << "Compilation successful!" << endl;

    } else {
        cerr << "Compilation failed!" << endl;
        return 1; // Return error code
    }


    return 0;
}