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

	DataPhoto data;

	ViewSrc windOne("Test_window1", cv::WINDOW_NORMAL);
	ViewSrc windSecond("Test_window2", cv::WINDOW_AUTOSIZE);

	while (true) {

		//exit if ESC or 'q' key is pressed
		if ((cv::waitKey(0) == tolower(81)) || (cv::waitKey(0) == 27)){
			(exit(0));
		}
		else{			
			//Display window

			//cv::imshow("New_window", data.getData());
		}
	}
}
