#pragma once

#include "data\data.h"
#include "data\dataPhoto.h"
#include "view/view.h"
#include "view/viewSrc.h"

class Controller : public Data, public ViewSrc {

private:
	
	//img object
	DataPhoto controllerModel;

	//window object
	ViewSrc controllerFrame;

public:

	Controller() {};

	//controller gets image
	void setModel(DataPhoto model);
	
	//controller gets window
	void setView(ViewSrc frame);

	//controller starts
	void work();

};
