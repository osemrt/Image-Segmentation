#include "header_files/declarations.h"

void recalculateCenterForClusters(vector<vector<pxLocation*>>* v, pxLocation* centroids, int N) {

	int avgX;
	int avgY;

	for (int i = 0; i < N; i++) {
		avgX = 0;
		avgY = 0;
		for (int j = 0; j < (*v)[i].size(); j++) {
			avgX += (*v)[i][j]->i;
			avgY += (*v)[i][j]->j;
		}

		if ((*v)[i].size() != 0) {
			centroids[i].i = (int)avgX / (*v)[i].size();
			centroids[i].j = (int)avgY / (*v)[i].size();
		}

	}

}