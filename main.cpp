#include "header_files/declarations.h"

int main(int argv, char** argc) {

	Mat image;
	readImageFromUser(&image);

	
	imshow("test", image);

	waitKey();

	return 0;
}