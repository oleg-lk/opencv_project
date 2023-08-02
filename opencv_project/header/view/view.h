#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

class View {

private:
	cv::Mat img;

public:

	virtual cv::Mat getData() {
		return img;
	}

};