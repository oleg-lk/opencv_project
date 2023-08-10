//LK!!!#pragma once не нужна в cpp файлах
//LK!!!#pragma once

#include "controller\controller.h"

//controller gets image
//LK!!!void Controller::setData(DataPhoto data) {
//LK!!!	controllerData1 = data;
//LK!!!}

//LK!!! аргумент базового класса
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

//LK!!! третье окно пока не нужно
//LK!!!void Controller::setView3(ViewSrc view3) {
//LK!!!	controllerView3 = view3;
//LK!!!}

void Controller::work() {

	//LK!!!cv::Mat model = controllerData1.DataPhoto::getData();
	//LK!!! из внутреннего поля _data запрашиваем картинку или видео, в зависимости оттого что задал пользователь в main()
	cv::Mat frame = _data.getData();

	//controller get img and window
	controllerView1.showFrame(frame);

	//LK!!! здесь наконец то используем модель. Она себе на вход берет одну картинку 
	//LK!!! и что-то с ней делает и возвращает обработанную
	//TODO cv::Mat frameFromModel = _model.process(frame);

	//LK!!! frameFromModel отрисовать в controllerView2
	controllerView2.showFrame(frame);

	//LK!!! третье окно пока не нужно
	//LK!!!cv::Mat model2 = controllerData2.DataVideo::getData();
	//LK!!!controllerView3.showFrame(model2);

}