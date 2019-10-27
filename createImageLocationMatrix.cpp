#include "header_files/declarations.h"

//A function to crate a visited matrix
pxLocation** createImageLocationMatrix(Mat* image) {

	//Creating pxLocation matrix
	pxLocation** imagePixels = new pxLocation * [image->rows];
	for (int i = 0; i < image->rows; i++) {
		imagePixels[i] = new pxLocation[image->cols];
	}

	//Initializing the matrix members
	//Notice that each pixel's currentClustedId is set to INT_MIN 
	//to mark as not clustered.
	for (int i = 0; i < image->rows; i++) {
		for (int j = 0; j < image->cols; j++) {
			imagePixels[i][j].i = i;
			imagePixels[i][j].j = j;
			imagePixels[i][j].currentClusterId = INT_MIN;
		}
	}

	return imagePixels;
}