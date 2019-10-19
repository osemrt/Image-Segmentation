#include "header_files/declarations.h"

pxLocation* generateRandomLocation(Mat* image, int N) {

	pxLocation* pxLocations = (pxLocation*)malloc(sizeof(pxLocation) * N);

	for (int i = 0; i < N; i++) {
		pxLocations[i].x = rand() % image->cols;
		pxLocations[i].y = rand() % image->rows;
		pxLocations[i].currentClusterId = i;
	}

	return pxLocations;
}