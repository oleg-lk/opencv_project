#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include <Windows.h>
#include <iostream>

#include "controller/controller.h"
#include "data/dataPhoto.h"
#include "data/dataVideo.h"
#include "data/data.h"
#include "view/view.h"
#include "view/viewSrc.h"

int main(){

	//create controller object
	Controller _controller;

	//create img object
	DataPhoto _data;

	//create window1
	ViewSrc _windFirst("Test_window1", cv::WINDOW_AUTOSIZE);

	//create window2
	ViewSrc _windSecond("Test_window2", cv::WINDOW_AUTOSIZE);

	//create window2
	ViewSrc _windThird("Test_window3", cv::WINDOW_AUTOSIZE);

	//send img to controller
	_controller.setData(_data);

	//send window1 to controller
	_controller.setView1(_windFirst);

	//send window1 to controller
	_controller.setView2(_windSecond);

	_controller.setView3(_windThird);

	while (true) {

		int key = cv::waitKey(0);

		//exit if ESC, 'Q' or 'q' key is pressed
		if ((key == tolower(81)) || (key == toupper(81)) || (key == 27)){
			(exit(0));
		}
		else{				
			_controller.work();
		}
	}
}
