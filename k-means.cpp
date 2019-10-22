#include "header_files/declarations.h"
// free heap memory!!
void k_means(Mat* image, int N) {

	pxLocation* centroids = generateRandomLocation(image, N);
	vector< vector < pxLocation* > > clusteredPixels(N);
	pxLocation** imagePixels = createImageLocationMatrix(image);


	int closestCentroidIndex;
	bool flag = true;

	int k = 0;//test

	while (flag) {
		flag = true;
		for (int i = 0; i < image->rows; i++) {
			for (int j = 0; j < image->cols; j++) {

				closestCentroidIndex = findClosestCentroid(image, centroids, &imagePixels[i][j], N);

				if (imagePixels[i][j].currentClusterId != closestCentroidIndex) {
					extractPixelFromPreviousCluster(&clusteredPixels, &imagePixels[i][j]);
					includePixelToCluster(image, &clusteredPixels, centroids[closestCentroidIndex], &imagePixels[i][j]);
					flag = false;
				}
			}

		}

		if (!flag) {
			recalculateCenterForClusters(&clusteredPixels, centroids, N);
		}

		

	}




}