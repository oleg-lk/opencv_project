#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include "view/viewSrc.h"

void ViewSrc::showFrame(cv::Mat frame){

	//Create trackbar
	int brightness_slider = 50;

	//Add slider "brightness"
	cv::createTrackbar("Brightness", "New_window", &brightness_slider, 100);

	//CALLBACK FUNC

}