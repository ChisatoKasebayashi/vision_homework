#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(void){
	cv::Mat img = cv::imread("image001.png");
	cv::imshow("test_image", img);
	cv::waitKey(0);
	return 0;
}
