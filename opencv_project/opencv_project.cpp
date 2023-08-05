#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include <Windows.h>
#include <iostream>

#include "controller/controller.h"
#include "data/dataPhoto.h"
#include "data/data.h"
#include "view/view.h"
#include "view/viewSrc.h"

int main(){

	//create controller object
	Controller controller;

	//create img object
	DataPhoto _data;

	//class DataPhoto object gets img
	cv::Mat controllerData = _data.getData();

	//create window1
	ViewSrc _windOne("Test_window1", cv::WINDOW_AUTOSIZE);

	//create window2
	ViewSrc _windSecond("Test_window2", cv::WINDOW_AUTOSIZE);

	//send img to controller
	controller.setModel(controllerData);

	//send window1 to controller
	controller.setView(_windOne);

	//send window1 to controller
	controller.setView(_windSecond);

	while (true) {

		int key = cv::waitKey(0);

		//exit if ESC, 'Q' or 'q' key is pressed
		if ((key == tolower(81)) || (key == toupper(81)) || (key == 27)){
			(exit(0));
		}
		else{				
			controller.work();
		}
	}
}
