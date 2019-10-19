#include "header_files/declarations.h"


void readImageFromUser(Mat* image) {

	String imagePath;

	do {

		cout << "Drag and drop your image here!" << endl;
		cin >> imagePath;

		*image = imread(imagePath, IMREAD_UNCHANGED);

		if ((*image).empty()); {
			cout << "\x1B[2J\x1B[H";		    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
			cout << "An error has occurred while reading the image, please try again!" << endl;
		}


	} while ((*image).empty());
}