#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    //cv::Mat image(500,500,CV_8UC3,cv::Scalar(10,10,10));
    cv::Mat image = imread("/home/stud-15/Downloads/stethem.jpeg",cv::IMREAD_COLOR);
    if(!image.data) {
        std::cerr<<"Cannot create image\n";
        return -1;
    }
    cv::Point p1(0,0);
    cv::Point p2(298,166);
    int thickness = 3;
    cv::rectangle(image,p1,p2,cv::Scalar(250,0,0),thickness,cv::LINE_8);
    cv::imshow("Output",image);
    cv::waitKey(0);
    return 0;
}
