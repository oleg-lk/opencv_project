#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include <Windows.h>
#include <iostream>

#include "controller/controller.h"

int main(){

	while (true) {

		//exit if ESC or 'q' key is pressed
		if ((GetAsyncKeyState(VK_ESCAPE)) || (GetAsyncKeyState('Q') & 0x8000)){
			(exit(0));
		}
		else{			
			//Display window
			cv::imshow("New_window", getData());
		}

	cv::waitKey(0);

	}
}
