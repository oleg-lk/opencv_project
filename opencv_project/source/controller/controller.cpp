//LK!!!#pragma once �� ����� � cpp ������
//LK!!!#pragma once

#include "controller\controller.h"

//controller gets image
//LK!!!void Controller::setData(DataPhoto data) {
//LK!!!	controllerData1 = data;
//LK!!!}

//LK!!! �������� �������� ������
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

//LK!!! ������ ���� ���� �� �����
//LK!!!void Controller::setView3(ViewSrc view3) {
//LK!!!	controllerView3 = view3;
//LK!!!}

void Controller::work() {

	//LK!!!cv::Mat model = controllerData1.DataPhoto::getData();
	//LK!!! �� ����������� ���� _data ����������� �������� ��� �����, � ����������� ������ ��� ����� ������������ � main()
	cv::Mat frame = _data.getData();

	//controller get img and window
	controllerView1.showFrame(frame);

	//LK!!! ����� ������� �� ���������� ������. ��� ���� �� ���� ����� ���� �������� 
	//LK!!! � ���-�� � ��� ������ � ���������� ������������
	//TODO cv::Mat frameFromModel = _model.process(frame);

	//LK!!! frameFromModel ���������� � controllerView2
	controllerView2.showFrame(frame);

	//LK!!! ������ ���� ���� �� �����
	//LK!!!cv::Mat model2 = controllerData2.DataVideo::getData();
	//LK!!!controllerView3.showFrame(model2);

}