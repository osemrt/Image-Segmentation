#pragma once

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <opencv2/opencv.hpp>
#include <algorithm>
#include <string>
#include <vector>


typedef struct{
	int x;
	int y;
	int currentClusterId;
}pxLocation;


using namespace cv;
using namespace std;
