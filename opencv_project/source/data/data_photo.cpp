#pragma once

#include "../../header/data/data_photo.h"

cv::Mat get_data() {

	//Read photo
	cv::Mat img = cv::imread("img/german-shepherd-dog.jpg");
	if (!img.data)
	{
		std::cout << "Image is missing" << std::endl;
		return img;
	}
}