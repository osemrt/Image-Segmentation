#include "header_files/declarations.h"

void includePixelToCluster(Mat* image, pxLocation centroidLocation, pxLocation* pxLocation) {

	pxLocation->currentClusterId = centroidLocation.currentClusterId;
	int px_x = pxLocation->x;
	int px_y = pxLocation->y;
	int cluster_x = centroidLocation.x;
	int cluster_y = centroidLocation.y;


	image->at<cv::Vec3b>(px_x, px_y)[0] = image->at<Vec3b>(cluster_x, cluster_y)[0]; //blue-channel
	image->at<cv::Vec3b>(px_x, px_y)[1] = image->at<Vec3b>(cluster_x, cluster_y)[1]; //green-channel
	image->at<cv::Vec3b>(px_x, px_y)[2] = image->at<Vec3b>(cluster_x, cluster_y)[2]; //red-channel


};