#include "header_files/declarations.h"

bool hasSameColor(Color color, Mat* image, int i, int j) {

	return
	(image->at<cv::Vec3b>(i, j)[0] == color.B)&&
	(image->at<cv::Vec3b>(i, j)[1] == color.G)&&
	(image->at<cv::Vec3b>(i, j)[2] == color.R);

}