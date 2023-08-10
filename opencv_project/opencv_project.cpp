#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

//LK!!! лишние хедеры
//LK!!!#include <Windows.h>
//LK!!!#include <iostream>

#include "controller/controller.h"
#include "data/dataPhoto.h"
#include "data/dataVideo.h"
#include "data/data.h"
#include "view/view.h"
#include "view/viewSrc.h"

//TODO создать базовый класс Model с виртуальной функцией cv::Mat process(cv::Mat frame)
//TODO создать базовый класс GrayModel с базовым классом Model, реализовать функцию process(cv::Mat frame),
//TODO которая будет возвращать серую картинку из той, которая пришла в аргументе функции
//TODO добавить контроллеру функцию установки модели Controller::setModel()

int main(){

	//create controller object
	//LK!!!названия локальных переменных просто без подчеркивания
	Controller controller;

	//create img object
	DataPhoto dataPhoto;
	//TODO создать обьект DataVideo
	//TODO создать обьект GrayModel

	//create window1
	ViewSrc windFirst("Test_window1", cv::WINDOW_AUTOSIZE);

	//create window2
	ViewSrc windSecond("Test_window2", cv::WINDOW_AUTOSIZE);

	//LK!!! третье окно пока не нужно
	//create window2
	//LK!!!ViewSrc windThird("Test_window3", cv::WINDOW_AUTOSIZE);

	//LK!!! задаем контроллеру источник данных - фото
	//send img to controller
	controller.setData(dataPhoto);

	//send window1 to controller
	controller.setView1(windFirst);

	//send window1 to controller
	controller.setView2(windSecond);

	//LK!!! третье окно пока не нужно
	//LK!!!controller.setView3(windThird);

	//TODO задать контроллеру модель

	//запускаем бесконечный цикл
	while (true) {

		//LK!!!int key = cv::waitKey(0);
		//LK!!! чтобы изображение постоянно перерисовывалось,
		//LK!!! меняем задержку у cv::waitKey с 0 на например 100 миллисекунд
		//LK!!! чтобы получить примерно 10fps
		const int delay = 100;	//TODO
		int key = cv::waitKey(delay);

		//exit if ESC, 'Q' or 'q' key is pressed
		if ((key == tolower(81)) || (key == toupper(81)) || (key == 27)){
			(exit(0));
		}
		//TODO по кнопке 'd' установить в controller dataPhoto
		//TODO по кнопке 'v' установить в controller DataVideo

		//LK!!! ветка else лишняя
		//LK!!!else{				
		//LK!!!	controller.work();
		//LK!!!}
		//запускаем 
		controller.work();
	}
}
