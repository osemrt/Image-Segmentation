#pragma once

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <opencv2/opencv.hpp>
#include <algorithm>
#include <string>
#include <vector>
#include <string> 


typedef struct{
	int i;
	int j;
	int currentClusterId;
}pxLocation;

typedef struct {
	int R;
	int G;
	int B;
}Color;


using namespace cv;
using namespace std;
