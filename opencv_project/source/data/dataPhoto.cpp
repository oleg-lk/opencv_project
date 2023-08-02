#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include "data/data.h"
#include "data/dataPhoto.h"
#include "view/view.h"

cv::Mat DataPhoto::getData() {

	//Read photo
	static cv::Mat img = cv::imread("img/german-shepherd-dog.jpg");
	if (!img.data)
	{
		std::cout << "Image is missing" << std::endl;
		return img;
	}
}