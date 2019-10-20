#include "header_files/declarations.h"

void includePixelToCluster(Mat* image, vector< vector <pxLocation*> >* clusteredPixels, pxLocation centroidLocation, pxLocation* pxLocation) {
	//clusteredPixels[closestCentroidIndex].push_back(&imagePixels[i][j]);
	clusteredPixels->at(centroidLocation.currentClusterId).push_back(pxLocation);

	pxLocation->currentClusterId = centroidLocation.currentClusterId;
	int px_x = pxLocation->x;
	int px_y = pxLocation->y;
	int centroid_x = centroidLocation.x;
	int centroid_y = centroidLocation.y;


	image->at<cv::Vec3b>(px_x, px_y)[0] = image->at<Vec3b>(centroid_x, centroid_y)[0]; //blue-channel
	image->at<cv::Vec3b>(px_x, px_y)[1] = image->at<Vec3b>(centroid_x, centroid_y)[1]; //green-channel
	image->at<cv::Vec3b>(px_x, px_y)[2] = image->at<Vec3b>(centroid_x, centroid_y)[2]; //red-channel


};