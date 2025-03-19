/*#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
  cv::VideoCapture video("/home/stud-15/Downloads/Тимати кидает респект подписчикам.mp4");
  if(!video.isOpened()) {
    std::cerr<<"Cannot open video\n";
    return -1;
  }
  cv::Mat frame;
  while(video.read(frame)) {
    cv::imshow("auzubille",frame);
    if(cv::waitKey(25)=='q') {
      break;
    }
  }
  video.release();
  cv::destroyAllWindows();
  return 0;
}*/