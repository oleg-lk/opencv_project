#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

#include "data/dataVideo.h"
#include "data/data.h"

cv::VideoCapture DataVideo::getVideo() {

	//Read video
	static cv::VideoCapture cap(0);

	int deviceID = 0;
	int apiID = cv::CAP_ANY;

	//check if not video
	if (!cap.isOpened())
	{
		std::cout << "Video is missing" << std::endl;
		return cv::VideoCapture();
	}
	return cap;
}