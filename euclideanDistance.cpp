#include "header_files/declarations.h"

float findDistance(Mat* image, pxLocation pxLocation1, pxLocation pxLocation2) {

	int diffBlue = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[0] - image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[0];
	int diffGreen = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[1] - image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[1];
	int diffRed = image->at<Vec3b>(pxLocation1.x, pxLocation1.y)[2] - image->at<Vec3b>(pxLocation2.x, pxLocation2.y)[2];

	float diff = sqrt(pow(diffBlue, 2) + pow(diffGreen, 2) + pow(diffRed, 2));

	return diff;

}