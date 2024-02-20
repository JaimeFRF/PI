#pragma once

#include <opencv2/opencv.hpp>
#include <string>
#include <vector>

namespace ImageProcessingDsl {

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
            void resizeImage(int width, int height);
            void flipImage(int flipCode);
            void rotateImage(double angle);
            cv::Mat getImage() const;
            void setImage(cv::Mat img);
            void showImage() const;
            std::pair<double, double> minMax();
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

    class Dsl {
        public:
            Dsl ();
            cv::Mat applyOperation(const Image &input, const ImageOperation &operation) const;
    };
}
