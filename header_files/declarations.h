#pragma once

#include "common.h"

void readImageFromUser(Mat* image);
void k_means(Mat* image, int N);
int gettingKValueFromUser();
pxLocation* generateRandomLocation(Mat* image, int N);
float findDistance(Mat* image, pxLocation pxLocation1, pxLocation pxLocation2);
int findClosestCentroid(Mat* image, pxLocation* centroids, pxLocation* pxLocaiton, int N);
void includePixelToCluster(Mat* image, pxLocation centroidLocation, pxLocation* pxLocation);
void extractPixelFromPreviousCluster(vector<vector<pxLocation*>>* v, pxLocation* ploc);