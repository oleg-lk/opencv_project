#pragma once

#include "data\data.h"
#include "data\dataPhoto.h"
#include "data\dataVideo.h"
#include "view/view.h"
#include "view/viewSrc.h"

//LK!!! ���������� ��������� ��� �� ����, �� �������� ������ ���� ������ � ������
class Controller/* : public Data, public ViewSrc*/ {

private:
	
	//img object
	//LK!!!DataPhoto controllerData1;
	//LK!!!DataVideo controllerData2;
	//LK!!! �������� � ������� ����� ������� ����� � �������� ���������� ������ ������ ����� ������ �������������
	Data _data;

	//window object
	ViewSrc controllerView1;

	ViewSrc controllerView2;

	//LK!!! ������ ���� ���� �� �����
	//LK!!!ViewSrc controllerView3;

public:

	//LK!!! � ����� ������� ����� � ������� �� ����� 
	Controller() {}

	//controller gets image
	//LK!!!void setData(DataPhoto data);
	//LK!!!void setData(DataVideo data);
	//LK!!! ������ ������ ����� ������� �����, ����������� ������� ����� ����� ������ ��� ��������))
	//LK!!! ������� ����� � ���� ������ ���� ������� cv::Mat Data::getData()
	void setData(Data data);

	//controller gets window
	void setView1(ViewSrc view1);

	void setView2(ViewSrc view2);

	//LK!!! ������ ���� ���� �� �����
	//LK!!!void setView3(ViewSrc view3);

	//controller starts
	void work();

};
