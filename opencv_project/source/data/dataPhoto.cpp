#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include "data\dataPhoto.h"

cv::Mat dataPhoto::getData() {

	//Read photo
	cv::Mat img = cv::imread("img/german-shepherd-dog.jpg");
	if (!img.data)
	{
		std::cout << "Image is missing" << std::endl;
		return img;
	}
}