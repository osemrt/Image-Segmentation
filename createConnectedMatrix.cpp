#include "header_files/declarations.h"

bool** createConnectedMatrix(int numOfRow, int numOfColumn) {

	bool** matrix = new bool* [numOfRow];
	for (int i = 0; i < numOfRow; i++) {
		matrix[i] = new bool[numOfColumn];
	}

	for (int i = 0; i < numOfRow; i++) {
		for (int j = 0; j < numOfColumn; j++) {
			matrix[i][j] = false;
		}
	}

	return matrix;
}