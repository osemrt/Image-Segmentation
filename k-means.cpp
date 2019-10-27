#include "header_files/declarations.h"


// free heap memory!!


void k_means(Mat* image, int N) {

	//Generating random locations for the cluster centers
	pxLocation* centroids = generateRandomLocation(image, N);

	//Created a vector matrix to store clustered pixels
	//Each row represents the members of a cluster
	vector< vector < pxLocation* > > clusteredPixels(N);

	//pxLocation matrix to mark clustered pixels
	pxLocation** imagePixels = createImageLocationMatrix(image);

	//Holds the closest centroid array index 
	//for each pixel.
	int closestCentroidIndex;

	//A flag to break the while loop
	bool flag = true;

	//The loop stops if cluster centers not change
	while (flag) {
		flag = true;
		for (int i = 0; i < image->rows; i++) {
			for (int j = 0; j < image->cols; j++) {

				//Finding the closest cluster for each pixel
				closestCentroidIndex = findClosestCentroid(image, centroids, &imagePixels[i][j], N);

				//if its calculated cluster is different, 
				//extract the pixel from the previous cluster 
				//and include it to the new cluster.
				if (imagePixels[i][j].currentClusterId != closestCentroidIndex) {
					extractPixelFromPreviousCluster(&clusteredPixels, &imagePixels[i][j]);
					includePixelToCluster(image, &clusteredPixels, centroids[closestCentroidIndex], &imagePixels[i][j]);
					flag = false;
				}
			}

		}

		if (!flag) {
			//Calculating new cluster centers
			recalculateCenterForClusters(&clusteredPixels, centroids, N);
		}
	}

	//Showing each cluster separate if it needed
	//showEachCluster(image, &clusteredPixels, centroids, N);

}