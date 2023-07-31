#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

void showFrame(cv::Mat frame){

	//Create new window
	cv::namedWindow("New_window", cv::WINDOW_NORMAL);

	//Create trackbar
	int brightness_slider = 50;

	//Add slider "brightness"
	cv::createTrackbar("Brightness", "New_window", &brightness_slider, 100);

	//CALLBACK FUNC

}