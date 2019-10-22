#include "header_files/declarations.h"

float findDistance(Mat* image, pxLocation pxLocation1, pxLocation pxLocation2) {

	int rows = image->rows;
	int cols = image->cols;

	///
	int px1_blue = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[0];
	int px2_blue = image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[0];
	//
	int diffBlue = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[0] - image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[0];
	
	///
	int px1_green = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[1];
	int px2_green = image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[1];
	//
	int diffGreen = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[1] - image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[1];
	
	///
	int px1_red = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[2];
	int px2_red = image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[2];
	//
	int diffRed = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[2] - image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[2];
	

	float diff = sqrt(pow(diffBlue, 2) + pow(diffGreen, 2) + pow(diffRed, 2));

	return diff;

}










