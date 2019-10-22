#include "header_files/declarations.h"

bool isValid(Mat* image, int i, int j) {

	return (i < image->rows) && (j < image->cols) && (i >= 0) && (j >= 0);

}