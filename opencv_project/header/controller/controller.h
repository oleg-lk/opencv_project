#pragma once

#include "data\data.h"
#include "data\dataPhoto.h"
#include "data\dataVideo.h"
#include "view/view.h"
#include "view/viewSrc.h"

//LK!!! контроллер независим сам по себе, но содержит внутри себя модель и данные
class Controller/* : public Data, public ViewSrc*/ {

private:
	
	//img object
	//LK!!!DataPhoto controllerData1;
	//LK!!!DataVideo controllerData2;
	//LK!!! работаем с данными через базовый класс и названия внутренних данных класса через нижнее подчеркивание
	Data _data;

	//window object
	ViewSrc controllerView1;

	ViewSrc controllerView2;

	//LK!!! третье окно пока не нужно
	//LK!!!ViewSrc controllerView3;

public:

	//LK!!! в конце функций точка с запятой не нужна 
	Controller() {}

	//controller gets image
	//LK!!!void setData(DataPhoto data);
	//LK!!!void setData(DataVideo data);
	//LK!!! задаем данные через базовый класс, контроллеру вообщем пофиг какие данные ему запихнут))
	//LK!!! главное чтобы у этих данных была функция cv::Mat Data::getData()
	void setData(Data data);

	//controller gets window
	void setView1(ViewSrc view1);

	void setView2(ViewSrc view2);

	//LK!!! третье окно пока не нужно
	//LK!!!void setView3(ViewSrc view3);

	//controller starts
	void work();

};
