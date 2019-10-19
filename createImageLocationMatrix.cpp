#include "header_files/declarations.h"

pxLocation** createImageLocationMatrix(Mat* image) {
	pxLocation** imagePixels = new pxLocation * [image->rows];
	for (int i = 0; i < image->rows; i++) {
		imagePixels[i] = new pxLocation[image->cols];
	}

	for (int i = 0; i < image->rows; i++) {
		for (int j = 0; j < image->cols; j++) {
			imagePixels[i][j].x = i;
			imagePixels[i][j].y = j;
			imagePixels[i][j].currentClusterId = INT_MIN;
		}
	}

	return imagePixels;
}