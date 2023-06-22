#include "../../header/data/data_photo.h"

int get_data() {

	cv::Mat img = cv::imread("img/german-shepherd-dog.jpg");
	if (!img.data)
	{
		std::cout << "Image is missing" << std::endl;
		return -1;
	}
}