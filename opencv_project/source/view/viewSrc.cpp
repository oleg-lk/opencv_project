//LK!!!#pragma once не нужна в cpp файлах
//LK!!!#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include "view/viewSrc.h"

void ViewSrc::showFrame(cv::Mat frame){

	//LK!!! класс ViewSrc занимается только выводом frame в окно, которое ему задали в конструкторе
	//LK!!! название окна сохнанено в winName, его и используем в cv::imshow

	//Create trackbar
	//int brightness_slider = 50;

	//Add slider "brightness"
	//cv::createTrackbar("Brightness", "New_window", &brightness_slider, 100);

	//resize image
	cv::resize(frame, frame, cv::Size(), 0.40, 0.40);

	//Display window1
	//LK!!!cv::imshow("Test_window1", frame);
	cv::imshow(winName, frame);

	//image to grey color
	//LK!!! это задача будет в модели
	//LK!!!cv::cvtColor(frame, frame, cv::COLOR_BGR2GRAY);

	//Display window2
	//LK!!! вывод во второе окно производится в другом классе
	//LK!!!cv::imshow("Test_window2", frame);

	//Display window3
	//LK!!!cv::imshow("Test_window3", frame);

}