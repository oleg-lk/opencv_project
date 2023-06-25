#pragma once

#include "../../header/view/view_src.h"

void show_frame(cv::Mat){

	//Create new window
	cv::namedWindow("New_window", cv::WINDOW_NORMAL);

	//Create trackbar
	int brightness_slider = 50;

	//Add slider "brightness"
	cv::createTrackbar("Brightness", "New_window", &brightness_slider, 100);

}