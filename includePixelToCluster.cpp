#include "header_files/declarations.h"

//A function to include a pixel to a cluster
void includePixelToCluster(Mat* image, vector< vector <pxLocation*> >* clusteredPixels, pxLocation centroidLocation, pxLocation* pxLocation) {
	
	//Add the new pixel to the related cluster
	clusteredPixels->at(centroidLocation.currentClusterId).push_back(pxLocation);

	//Changing the cluster of the pixel
	pxLocation->currentClusterId = centroidLocation.currentClusterId;

	int px_x = pxLocation->i;
	int px_y = pxLocation->j;
	int centroid_x = centroidLocation.i;
	int centroid_y = centroidLocation.j;

	//Changing the pixel color with its new cluster color.
	image->at<cv::Vec3b>(px_x, px_y)[0] = image->at<Vec3b>(centroid_x, centroid_y)[0]; //blue-channel
	image->at<cv::Vec3b>(px_x, px_y)[1] = image->at<Vec3b>(centroid_x, centroid_y)[1]; //green-channel
	image->at<cv::Vec3b>(px_x, px_y)[2] = image->at<Vec3b>(centroid_x, centroid_y)[2]; //red-channel


};