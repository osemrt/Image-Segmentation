#include "header_files/declarations.h"

//A function to create a Color structure from the image RGB values
Color getColorStructureForPixel(Mat* image, int i, int j) {

	Color oldColor;
	oldColor.B = image->at<cv::Vec3b>(i, j)[0]; //blue-channel
	oldColor.G = image->at<cv::Vec3b>(i, j)[1]; //green-channel
	oldColor.R = image->at<cv::Vec3b>(i, j)[2]; //red-channel

	return oldColor;
}