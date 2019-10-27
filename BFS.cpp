#include "header_files/declarations.h"


void BFS(Mat* image, bool** connected, int i, int j, Color oldColor, Color newColor, int directionMatrix[][8]) {

	//Mark the current pixel as connected
	connected[i][j] = true;

	//Change its color with the new color
	image->at<cv::Vec3b>(i, j)[0] = newColor.B;	 //blue-channel
	image->at<cv::Vec3b>(i, j)[1] = newColor.G;	 //green-channel
	image->at<cv::Vec3b>(i, j)[2] = newColor.R;	 //red-channel

	int new_i;
	int new_j;

	for (int k = 0; k < 8; k++) {

		new_i = i + directionMatrix[0][k];
		new_j = j + directionMatrix[1][k];

		//Checking needed controls, if the current index passes them, call BFS() for neighbor pixel
		if (isValid(image, new_i, new_j) && !isConnected(connected, new_i, new_j) && hasSameColor(oldColor, image, new_i, new_j)) {
			BFS(image, connected, new_i, new_j, oldColor, newColor, directionMatrix);
		}
			
	}
}