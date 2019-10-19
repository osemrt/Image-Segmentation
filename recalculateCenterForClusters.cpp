#include "header_files/declarations.h"

void recalculateCenterForClusters(vector<vector<pxLocation*>>* v, pxLocation* centroids, int N) {

	int avgX;
	int avgY;

	for (int i = 0; i < N; i++) {
		avgX = 0.0;
		avgY = 0.0;
		for (int j = 0; j < (*v)[i].size(); j++) {
			avgX += (*v)[i][j]->x;
			avgY += (*v)[i][j]->y;
		}
	
		centroids[i].x = avgX / (*v)[i].size();
		centroids[i].y = avgY / (*v)[i].size();
	}

}