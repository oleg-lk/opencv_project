#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	/*//Create window
	cv::namedWindow("New_window", WINDOW_NORMAL);

	//Resize window
	cv::resizeWindow("New_window", 800, 480);

	int brightness_slider = 50;

	//Add slider "brightness"
	createTrackbar("Brightness", "New_window", &brightness_slider, 100);*/

	Mat lena = imread("img/z_96977774.jpg");
	if (!lena.data)
	{
		cout << "Image is missing" << endl;
		return -1;
	}

	cv::namedWindow("New_window", WINDOW_NORMAL);

	//Display window
	imshow("New_window", lena);

	cv::resizeWindow("New_window", 511, 682);

	int brightness_slider = 50;

	//Add slider "brightness"
	createTrackbar("Brightness", "New_window", &brightness_slider, 100);

	//Press key to close a window
	waitKey(0);

	return 0;
}
