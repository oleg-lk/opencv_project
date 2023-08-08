#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include "view/viewSrc.h"

void ViewSrc::showFrame(cv::Mat frame){

	//Create trackbar
	//int brightness_slider = 50;

	//Add slider "brightness"
	//cv::createTrackbar("Brightness", "New_window", &brightness_slider, 100);

	//resize image
	cv::resize(frame, frame, cv::Size(), 0.40, 0.40);

	//Display window1
	cv::imshow("Test_window1", frame);

	//image to grey color
	cv::cvtColor(frame, frame, cv::COLOR_BGR2GRAY);

	//Display window2
	cv::imshow("Test_window2", frame);

}