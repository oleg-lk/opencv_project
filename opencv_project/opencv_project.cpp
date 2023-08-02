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

	while (true) {

		//exit if ESC or 'q' key is pressed
		if ((GetAsyncKeyState(VK_ESCAPE)) || (GetAsyncKeyState('Q') & 0x8000)){
			(exit(0));
		}
		else{			
			//Display window
			DataPhoto data;
			cv::imshow("New_window", data.getData());
		}

		cv::waitKey(0);

	}
}
