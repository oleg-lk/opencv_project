#pragma once

#include "controller\controller.h"

//controller gets image
void Controller::setModel(cv::Mat model) {
	controllerModel = model;
}

//controller gets window
void Controller::setView(ViewSrc frame) {
	controllerFrame = frame;
}

void Controller::work() {

	cv::Mat imgGray;

	//resize image
	cv::resize(controllerModel, controllerModel, cv::Size(), 0.40, 0.40);

	//Display window1
	cv::imshow("Test_window1", controllerModel);

	//image to grey color
	cv::cvtColor(controllerModel, controllerModel, cv::COLOR_BGR2GRAY);

	//Display window2
	cv::imshow("Test_window2", controllerModel);
}