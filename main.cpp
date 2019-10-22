#include "header_files/declarations.h"

int main(int argv, char** argc) {

	srand(time(NULL));

	Mat image;
	readImageFromUser(&image);	
	int numOfClusters = gettingKValueFromUser();

	imshow("original", image);

	k_means(&image, numOfClusters);
	imshow("k-means [" + to_string(numOfClusters) + "]", image);

	findConnectedComponents(&image);
	imshow("connected-component", image);


	waitKey();

	return 0;
}