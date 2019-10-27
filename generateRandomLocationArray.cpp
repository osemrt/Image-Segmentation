#include "header_files/declarations.h"

//A function generates random locations for each cluster center 
//and colors each random locations in different colors
pxLocation* generateRandomLocation(Mat* image, int N) {

	pxLocation* pxLocations = new pxLocation [N];

	for (int i = 0; i < N; i++) {
		pxLocations[i].i = rand() % image->rows;
		pxLocations[i].j = rand() % image->cols;
		pxLocations[i].currentClusterId = i;
	}

	return pxLocations;
}