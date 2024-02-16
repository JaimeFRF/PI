
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "antlr4-runtime.h"
#include "myDslLexer.h"
#include "myDslParser.h"
#include <opencv2/opencv.hpp>


namespace ImageProcessingDsl {

    #define GAUSSIAN_BLUR 1
    #define MEDIAN_BLUR 2
    #define BILATERAL_BLUR 3

    class Image{
        private:
            int id;
            cv::Mat image;
        public:
            Image(std::string path){
                image = cv::imread(path);
                if (image.empty()) {
                    throw std::runtime_error("Could not open or find the image");
                }
            }
            Image(cv::Mat img){
                image = img;
            }


            int getId(){
                return id;
            }

            void resizeImage(int width, int height){
                cv::resize(image, image, cv::Size(width, height));
            }
            void flipImage(int flipCode){
                cv::flip(image, image, flipCode);
            }
            void rotateImage(double angle){
                cv::Point2f center((image.cols-1)/2.0, (image.rows-1)/2.0);
                cv::Mat rot = cv::getRotationMatrix2D(center, angle, 1.0);
                cv::warpAffine(image, image, rot, image.size());
            }


            cv::Mat getImage() const {return image;}
            
            void setImage(cv::Mat img) {image = img;}
            
            void showImage() const {
                cv::imshow("Image", image);
                cv::waitKey(0);
                cv::destroyAllWindows();
            }

            std::pair<double, double> minMax(){
                double min, max;
                cv::minMaxLoc(image, &min, &max);
                return std::make_pair(min, max);
            }

            Image operator+(const Image &other){
                cv::Mat resultImage;
                cv::Mat tmp = this->getImage();
                cv::resize(tmp, tmp, other.getImage().size());
                cv::add(tmp, other.getImage(), resultImage);
                return Image(resultImage);
            }

            Image operator-(const Image &other){
                cv::Mat resultImage;
                cv::Mat tmp = this->getImage();
                cv::resize(tmp, tmp, other.getImage().size());
                cv::subtract(tmp, other.getImage(), resultImage);
                return Image(resultImage);
            }

            Image operator*(const Image &other){
                cv::Mat resultImage;
                cv::Mat tmp = this->getImage();
                cv::resize(tmp, tmp, other.getImage().size());
                cv::multiply(tmp, other.getImage(), resultImage);
                return Image(resultImage);
            }

            ~Image() {}
    };

    class ImageOperation {
        public:
            virtual cv::Mat execute(const Image &inputs) const = 0; // Pure virtual function
            virtual ~ImageOperation() {};
    };


    class Binarization : public ImageOperation {
        public:
            cv::Mat execute(const Image &input) const{
                cv::Mat grayImage;
                cv::cvtColor(input.getImage(), grayImage, cv::COLOR_BGR2GRAY);
                return grayImage;
            }
    };

    class Blur : public ImageOperation {
        private:
            cv::Size size;
            double sigma;
            int mode;
            int ksize;
        public:
            Blur(int mode, cv::Size size = cv::Size(5, 5), double sigma = 0){
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
            Blur(int mode, int ksize){
                if (mode != MEDIAN_BLUR) {
                    throw std::invalid_argument("Invalid mode for this constructor");
                }
                this->mode = mode;
                this->ksize = ksize;
            }
            Blur(int mode, int kzise, int sigma){
                if (mode != BILATERAL_BLUR) {
                    throw std::invalid_argument("Invalid mode for this constructor");
                }
                this->mode = mode;
                this->ksize = ksize;
                this->sigma = sigma;
            }

            cv::Mat execute(const Image &input) const {
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
    };

    class Threshold : public ImageOperation {
        private:
            double threshold;
            double maxVal;
            int type;
        public:
            Threshold(double threshold = 0, double maxVal = 255, int type = cv::THRESH_BINARY_INV | cv::THRESH_OTSU){
                this->threshold = threshold;
                this->maxVal = maxVal;
                this->type = type;
            }

            cv::Mat execute(const Image &input) const {
                cv::Mat thresholdedImage;
                cv::threshold(input.getImage(), thresholdedImage, threshold, maxVal, type);
                return thresholdedImage;
            }
    };

    class Countor : public ImageOperation {
            private:
                int mode;
                int method;
                cv::Scalar color;

            public:
                Countor(int mode = cv::RETR_EXTERNAL, int method = cv::CHAIN_APPROX_SIMPLE, cv::Scalar color = cv::Scalar(0, 0, 255)){
                    this->mode = mode;
                    this->method = method;
                    this->color = color;
                }

                void findContours(const Image &input, std::vector<std::vector<cv::Point>> *contours, std::vector<cv::Vec4i> *hierarchy) const {                    
                    cv::findContours(input.getImage(), *contours, *hierarchy, mode, method);
                }

                cv::Mat drawContours(const Image &input, const std::vector<std::vector<cv::Point>> &contours) const {
                    cv::Mat drawing = input.getImage().clone();
                    cv::drawContours(drawing, contours, -1, color, 2);
                    return drawing;
                }

                cv::Mat execute(const Image &input) const {
                    
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
    };


    class Dsl {
        public:
            Dsl () {}
            cv::Mat applyOperation(const Image &input, const ImageOperation &operation) const {
                return operation.execute(input);
            }
    };

}

using namespace ImageProcessingDsl;
using namespace antlr4;
std::unordered_map<std::string, Image*> imageMap;
Dsl dsl;

int main(){

    Dsl dsl;

    std::ifstream inputFile ("input.txt");
    ANTLRInputStream input(inputFile);
    
    myDslLexer lexer(&input);
    CommonTokenStream tokens(&lexer);   

    myDslParser parser(&tokens);
    myDslParser::DslContext* tree = parser.dsl();

    for (auto commandCtx : tree->command()) {
        if (auto loadImageCommand = commandCtx->getRuleContext<myDslParser::LoadImageCommandContext>(0)) {
            std::string imagePath = loadImageCommand->path->getText();  
            std::string variableId = loadImageCommand->VARIABLE()->getText();
            Image* image = new Image(imagePath.substr(1, imagePath.size()-2));
            imageMap[variableId] = image;
        }

        else if(auto showImageCommand = commandCtx->getRuleContext<myDslParser::ShowImageCommandContext>(0)){
            std::string variableId = showImageCommand->VARIABLE()->getText();
            Image* myImg = imageMap[variableId];
            myImg->showImage();
        }

        else if(auto blurCommand = commandCtx->getRuleContext<myDslParser::BlurImageCommandContext>(0)){
            std::string newVar = blurCommand->VARIABLE()[0]->getText();
            Image* oldImg = imageMap[blurCommand->VARIABLE()[1]->getText()];
            std::string blurType = blurCommand->blurType()->getText();
            cv::Mat newImg;

            if(blurType == "gaussianBlur"){
                auto optionsCtx = blurCommand->blurOpts;
                if(optionsCtx){
                    int size1 = std::stoi(optionsCtx->size1->getText());
                    int size2 = std::stoi(optionsCtx->size2->getText());
                    newImg = dsl.applyOperation(oldImg->getImage(), Blur(GAUSSIAN_BLUR, cv::Size(size1, size2)));
                }else{
                    newImg = dsl.applyOperation(oldImg->getImage(), Blur(GAUSSIAN_BLUR));
                }
            }
            else if(blurType == "bilateralBlur"){
                auto options = blurCommand->blurOpts;
                if(options){
                    int ksize = std::stoi(options->ksize->getText());
                    int sigma = std::stoi(options->sigma->getText());
                    newImg = dsl.applyOperation(oldImg->getImage(), Blur(BILATERAL_BLUR, ksize, sigma));
                }else{
                    newImg = dsl.applyOperation(oldImg->getImage(), Blur(BILATERAL_BLUR));
                }
            }
            else if(blurType == "medianBlur"){
                auto options = blurCommand->blurOpts;
                if(options){
                    int ksize = std::stoi(options->ksize->getText());
                    newImg = dsl.applyOperation(oldImg->getImage(), Blur(MEDIAN_BLUR, ksize));
                }else{
                    newImg = dsl.applyOperation(oldImg->getImage(), Blur(MEDIAN_BLUR));           
                }
            }


            imageMap[newVar] = new Image(newImg);
        }
        else {
            std::cout << "Invalid command" << std::endl;
        }
    }


    return 0;
}