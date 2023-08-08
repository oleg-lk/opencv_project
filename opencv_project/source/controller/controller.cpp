#pragma once

#include "controller\controller.h"

//controller gets image
void Controller::setData(DataPhoto data) {
	controllerData = data;
}

//controller gets window
void Controller::setView1(ViewSrc view1) {
	controllerView1 = view1;
}

void Controller::setView2(ViewSrc view2) {
	controllerView2 = view2;
}

void Controller::setView3(ViewSrc view3) {
	controllerView3 = view3;
}

void Controller::work() {

	cv::Mat model = controllerData.getData();

	//controller get img and window
	controllerView1.showFrame(model);

	controllerView2.showFrame(model);

	//controllerView3.showFrame(controllerData.getData());

}