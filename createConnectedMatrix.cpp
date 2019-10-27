#include "header_files/declarations.h"

//A function to create a boolean matrix to mark 
//that a member is visited or not
bool** createConnectedMatrix(int numOfRow, int numOfColumn) {

	//Crating boolean matrix
	bool** matrix = new bool* [numOfRow];
	for (int i = 0; i < numOfRow; i++) {
		matrix[i] = new bool[numOfColumn];
	}

	//Initializing the matrix
	for (int i = 0; i < numOfRow; i++) {
		for (int j = 0; j < numOfColumn; j++) {
			matrix[i][j] = false;
		}
	}

	return matrix;
}