#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

class Data {

private:
	cv::Mat img;

public:

	virtual cv::Mat getData() {
		return img;
	}

};