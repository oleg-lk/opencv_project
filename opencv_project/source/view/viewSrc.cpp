#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include "view/viewSrc.h"

void ViewSrc::showFrame(cv::Mat frame){

	//resize image
	cv::resize(frame, frame, cv::Size(), 0.40, 0.40);

	//Display window
	cv::imshow(winName, frame);

}