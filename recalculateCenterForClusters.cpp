#include "header_files/declarations.h"

void recalculateCenterForClusters(vector<vector<pxLocation*>>* v, pxLocation* centroids, int N) {

	int avgX;
	int avgY;

	for (int i = 0; i < N; i++) {
		avgX = 0;
		avgY = 0;
		for (int j = 0; j < (*v)[i].size(); j++) {
			avgX += (*v)[i][j]->x;
			avgY += (*v)[i][j]->y;
		}

		if ((*v)[i].size() != 0) {
			centroids[i].x = (int)avgX / (*v)[i].size();
			centroids[i].y = (int)avgY / (*v)[i].size();
		}

	}

}