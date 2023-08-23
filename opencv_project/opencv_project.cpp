#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include "controller/controller.h"
#include "data/dataPhoto.h"
#include "data/dataVideo.h"
#include "data/data.h"
#include "view/view.h"
#include "view/viewSrc.h"
#include "model/grayModel.h"

int main(){

	//create controller object
	Controller controller;

	//create img object
	DataPhoto dataP;

	DataVideo dataV;

	GrayModel grayM;

	//create window1
	ViewSrc windFirst("Test_window1", cv::WINDOW_AUTOSIZE);

	//create window2
	ViewSrc windSecond("Test_window2", cv::WINDOW_AUTOSIZE);

	//send img to controller
	controller.setData(dataP);

	//send window1 to controller
	controller.setView1(windFirst);

	//send window2 to controller
	controller.setView2(windSecond);

	//TODO задать контроллеру модель

	while (true) {

		const int delay = 100;
		int key = cv::waitKey(delay);

		//exit if ESC, 'Q' or 'q' key is pressed
		if ((key == tolower(81)) || (key == toupper(81)) || (key == 27)){
			(exit(0));
		}			
		controller.work();
	}
}
