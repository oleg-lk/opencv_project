#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

class ViewSrc {

private:
	std::string winName;
	int winFlag;

public:

	ViewSrc(const std::string WinName, int flag) {
		winName = WinName;
		winFlag = flag;

		//Create new window
		cv::namedWindow(winName, flag);
	}

	void showFrame(cv::Mat frame);

};
