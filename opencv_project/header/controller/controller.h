#pragma once

#include "data\data.h"
#include "data\dataPhoto.h"
#include "view/view.h"
#include "view/viewSrc.h"

class Controller : public Data, public ViewSrc {

private:
	
	//img object
	DataPhoto controllerData;

	//window object
	ViewSrc controllerView1;

	ViewSrc controllerView2;

	ViewSrc controllerView3;

public:

	Controller() {};

	//controller gets image
	void setData(DataPhoto data);
	
	//controller gets window
	void setView1(ViewSrc view1);

	void setView2(ViewSrc view2);

	void setView3(ViewSrc view3);

	//controller starts
	void work();

};
