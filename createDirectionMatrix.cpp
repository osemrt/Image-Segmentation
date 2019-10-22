#include "header_files/declarations.h"

int** createDirectionMatrix() {

	int** directionMatrix = new int * [2];
	for (int i = 0; i < 2; i++) {
		directionMatrix[i] = new int[8];
	}


	//Fix needed!
	directionMatrix[0][0] = -1;
	directionMatrix[1][0] = 1;

	directionMatrix[0][1] = 1;
	directionMatrix[1][1] = -1;

	directionMatrix[0][2] = 1;
	directionMatrix[1][2] = 1;

	directionMatrix[0][3] = 0;
	directionMatrix[1][3] = 1;

	directionMatrix[0][4] = 1;
	directionMatrix[1][4] = 0;

	directionMatrix[0][5] = -1;
	directionMatrix[1][5] = -1;

	directionMatrix[0][6] = 0;
	directionMatrix[1][6] = -1;

	directionMatrix[0][7] = -1;
	directionMatrix[1][7] = 0;

	return directionMatrix;	

}