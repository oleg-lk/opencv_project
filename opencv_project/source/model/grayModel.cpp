#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include "model/grayModel.h"

cv::Mat GrayModel::process(cv::Mat frame) {
	//image to grey color
	cv::cvtColor(frame, frame, cv::COLOR_BGR2GRAY);
	return frame;
}

