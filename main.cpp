/*#include <iostream>
#include <opencv2/opencv.hpp>
int main() {
    cv::Mat img = cv::imread("/home/stud-15/Downloads/Untitled.jpeg",cv::IMREAD_COLOR);
    if(img.empty()) {
        std::cerr<<"Cannot load image\n";
        return -1;
    }
    /*cv::Mat resized;
    int new_width=300;
    int new_height=300;
    cv::resize(img,resized,cv::Size(new_width,new_height));*/
    /*int x =50,y = 50,width = 70,height = 70;
    cv::Mat cropped = img(cv::Rect(x,y,width,height));*/
    /*double  angle = 60.0;
    cv::Point2f center(img.cols/2.0,img.rows/2.0);
    cv::Mat rotation_matrix = cv::getRotationMatrix2D(center,angle,1.0);
    cv::Mat rotated;
    cv::warpAffine(img,rotated,rotation_matrix,img.size());
    cv::imshow("auzubille",rotated);
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}*/
