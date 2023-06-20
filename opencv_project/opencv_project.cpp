#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace std;//TODO-> убрать
using namespace cv;	//TODO-> убрать

int main()
{
	//!!! корневая папка проекта - та где лежит opencv_project.vcxproj файл

	//TODO1 - слой data
	//!!! уровень data изолирован ото всех и не от кого не зависит
	// создать класс для данных DataPhoto
	// описание самого класса -> header/data/data_photo.h
	// реализация функций класса -> source/data/data_photo.cpp
	// у класса есть функция getData, возвращающая cv::Mat
	// если imread не прочитал файл, вывести сообщение в консоль и вернуть пустой cv::Mat
	Mat lena = imread("img/z_96977774.jpg");	//TODO->в класс DataPhoto
	if (!lena.data)									//TODO->в класс DataPhoto
	{												//TODO->в класс DataPhoto
		cout << "Image is missing" << endl;			//TODO->в класс DataPhoto
		return -1;									//TODO->в класс DataPhoto
	}												//TODO->в класс DataPhoto

	//TODO2 - слой view
	//!!! уровень view может ссылаться только на уровень controller чтобы давать ему запросы на работу с моделью
	// создать класс для вывода оригинального изображения ViewSrc
	// описание самого класса -> header/view/view_src.h
	// реализация функций класса -> source/view/view_src.cpp 
	// у класса есть функция showFrame, принимающая cv::Mat
	// в конструкторе класса инициализируется окно(cv::namedWindow)
	// и создается трекбар. В трекбар необходимо передать callback функцию для отслеживания изменений трекбара
	cv::namedWindow("New_window", WINDOW_NORMAL);	//TODO->в конструктор ViewSrc

	//Display window
	imshow("New_window", lena);

	cv::resizeWindow("New_window", 511, 682);	//TODO-> убрать

	int brightness_slider = 50; // TODO->в класс ViewSrc

	//Add slider "brightness"
	createTrackbar("Brightness", "New_window", &brightness_slider, 100);	//TODO->в класс ViewSrc

	//TODO3
	// создать бесконечный цикл обработки ползовательских нажатий
	// при нажатии ESC или 'q' - завершени епрограммы
	//Press key to close a window
	waitKey(0);

	//TODO4
	// создать для класса DataPhoto базовый класс Data и унаследовать DataPhoto от Data
	// описание самого класса -> header/data/data.h
	// у класса Data создать виртуальную функцию getData, которую реализует его наслденик DataPhoto

	//TODO5
	// создать для класса ViewSrc базовый класс View и унаследовать DataPhoto от View
	// описание самого класса -> header/view/view.h
	// у класса View создать виртуальную функцию getData, которую реализует его наслденик DataPhoto

	//TODO6 - слой controller
	//!!! уровень controller храните в себе модель и все view
	//!!! controller запрашивает у модели данные и отдает их view

	return 0;
}
