#include "header_files/declarations.h"

void showEachCluster(Mat* image, vector< vector < pxLocation* > >* v,  pxLocation* centroids, int N) {

	int tmp_i;
	int tmp_j;
	Mat cluster; 

	for (int i = 0; i < N; i++) {

		cluster = Mat(image->rows, image->cols, CV_8UC3, Scalar(0, 0, 0));
		for (int j = 0; j < (*v)[i].size(); j++) {

			tmp_i = (*v)[i][j]->i;
			tmp_j = (*v)[i][j]->j;

			cluster.at<cv::Vec3b>(tmp_i, tmp_j)[0] = image->at<Vec3b>(centroids[i].i, centroids[i].j)[0];
			cluster.at<cv::Vec3b>(tmp_i, tmp_j)[1] = image->at<Vec3b>(centroids[i].i, centroids[i].j)[1];
			cluster.at<cv::Vec3b>(tmp_i, tmp_j)[2] = image->at<Vec3b>(centroids[i].i, centroids[i].j)[2];
		}

		imshow("cluster [" + to_string(i) + "]", cluster);

	}


	

}