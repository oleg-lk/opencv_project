#include "controller\controller.h"

//controller gets image
void Controller::setData(Data data) {
	_data = data;
}

//controller gets window
void Controller::setView1(ViewSrc view1) {
	controllerView1 = view1;
}

void Controller::setView2(ViewSrc view2) {
	controllerView2 = view2;
}

void Controller::work() {

	cv::Mat frame = _data.getData();

	//controller get img and window
	controllerView1.showFrame(frame);

	cv::Mat frameFromModel = _model.process(frame);

	controllerView2.showFrame(frameFromModel);

}