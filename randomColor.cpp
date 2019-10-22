#include "header_files/declarations.h"

Color generateRandomColor() {

	Color randomColor;
	randomColor.R = rand() % 256;
	randomColor.G = rand() % 256;
	randomColor.B = rand() % 256;

	return randomColor;
}