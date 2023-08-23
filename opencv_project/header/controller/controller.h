#pragma once

#include "data\data.h"
#include "data\dataPhoto.h"
#include "data\dataVideo.h"
#include "view/view.h"
#include "view/viewSrc.h"
#include "model/model.h"
#include "model/grayModel.h"

class Controller {

private:
	
	Data _data;

	//window object
	ViewSrc controllerView1;

	ViewSrc controllerView2;

	Model _model;

public:

	Controller() {}
	
	//controller gets window
	void setView1(ViewSrc view1);

	void setView2(ViewSrc view2);

	void setData(Data data);

	//controller starts
	void work();

};
