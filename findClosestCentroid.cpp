#include "header_files/declarations.h"

int findClosestCentroid(Mat* image, pxLocation* centroids, pxLocation* pxLocaiton, int N) {

	float distance;
	float min = findDistance(image, centroids[0], *pxLocaiton);
	int closestCentroidIndex = 0;

	for (int i = 1; i < N; i++) {
		int distance = findDistance(image, centroids[i], *pxLocaiton);
		if (distance < min) {
			min = distance;
			closestCentroidIndex = i;
		}
	}

	return closestCentroidIndex;

}