#include "header_files/declarations.h"

//A function to get an image file from the user
//It pops up until the user typing a valid image path
void readImageFromUser(Mat* image) {

	String imagePath = "";

	do {

		cout << "Drag and drop your image here!" << endl;
		cin >> imagePath;

		*image = imread(imagePath, IMREAD_UNCHANGED);

		if ((*image).empty()); {
			//CSI[2J clears screen, 
			//CSI[H moves the cursor to top-left corner
			cout << "\x1B[2J\x1B[H";		   
			cout << "An error has occurred while reading the image, please try again!" << endl;
			cout << "Your image path: " << imagePath << endl;
		}


	} while ((*image).empty());
}