#include "header_files/declarations.h"

//A utility function to find euclidian distance
//between two pixels
float findDistance(Mat* image, pxLocation pxLocation1, pxLocation pxLocation2) {

	int rows = image->rows;
	int cols = image->cols;

	int diffBlue = image->at<Vec3b>(pxLocation1.i, pxLocation1.j)[0] - image->at<Vec3b>(pxLocation2.i, pxLocation2.j)[0];
	int diffGreen = image->at<Vec3b>(pxLocation1.i, pxLocation1.j)[1] - image->at<Vec3b>(pxLocation2.i, pxLocation2.j)[1];
	int diffRed = image->at<Vec3b>(pxLocation1.i, pxLocation1.j)[2] - image->at<Vec3b>(pxLocation2.i, pxLocation2.j)[2];

	float diff = sqrt(pow(diffBlue, 2) + pow(diffGreen, 2) + pow(diffRed, 2));

	return diff;
}










