#include "header_files/declarations.h"

//A function to determine that the index is valid or not 
//after adding direction Matrix[i][j] to the current pixel location
bool isValid(Mat* image, int i, int j) {
	return (i < image->rows) && (j < image->cols) && (i >= 0) && (j >= 0);
}