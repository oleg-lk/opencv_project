#pragma once

#include "controller\controller.h"

//controller gets image
void Controller::setModel(DataPhoto model) {
	controllerModel = model;
}

//controller gets window
void Controller::setView(ViewSrc frame) {
	controllerFrame = frame;
}

void Controller::work() {

	//cv::Mat imgGray;

	//controller get img and window
	controllerFrame.showFrame(controllerModel.getData());

	//image to grey color
	//cv::cvtColor(controllerModel, controllerModel, cv::COLOR_BGR2GRAY);

	//Display window2
	//cv::imshow("Test_window2", controllerModel);
}