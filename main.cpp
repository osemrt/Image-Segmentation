#include "header_files/declarations.h"

int main(int argv, char** argc) {

	srand(time(NULL));
	Mat image;

	//Getting an image path and cluster number
	//from the console
	readImageFromUser(&image);
	int numOfClusters = gettingClusterNumberFromUser();

	//Showing the original image
	imshow("original", image);

	//Calling k_means()
	k_means(&image, numOfClusters);

	//Showing the image after applying k-means clustering
	imshow("k-means [" + to_string(numOfClusters) + "]", image);

	//Calling findConnectedComponents()
	findConnectedComponents(&image);

	//Showing the image after finding and coloring components
	imshow("connected-component", image);

	waitKey();

	return 0;
}