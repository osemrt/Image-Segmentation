#include "header_files/declarations.h"


void BFS(Mat* image, bool** connected, int i, int j, Color oldColor, Color newColor, int** directionMatrix) {

	
	connected[i][j] = true;

	image->at<cv::Vec3b>(i, j)[0] = newColor.B;	 //blue-channel
	image->at<cv::Vec3b>(i, j)[1] = newColor.G;	 //green-channel
	image->at<cv::Vec3b>(i, j)[2] = newColor.R;	 //red-channel

	int new_i;
	int new_j;

	for (int k = 0; k < 8; k++) {
		new_i = i + directionMatrix[0][k];
		new_j = j + directionMatrix[1][k];


		if (isValid(image, new_i, new_j) && !isConnected(connected, new_i, new_j) && hasSameColor(oldColor, image, new_i, new_j)) {
			//cout << "new_i: " << new_i << ", " << "new_j: " << new_j << " : " << oldColor.R << ", " << oldColor.G << ", " << oldColor.B << endl;
			BFS(image, connected, new_i, new_j, oldColor, newColor, directionMatrix);
			
		}
			
	}



}