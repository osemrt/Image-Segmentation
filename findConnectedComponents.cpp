#include "header_files/declarations.h"

//A function to find each component 
//after clustering the image
void findConnectedComponents(Mat* image) {

	//Creating a matrix to mark visited pixels
	bool** connected = createConnectedMatrix(image->rows, image->cols);

	int directionMatrix[2][8] = {
								  { -1, 1, 1, 0, 1, -1, 0, -1 },
								  {  1,-1, 1, 1, 0, -1,-1,  0 }
	};

	for (int i = 0; i < image->rows; i++) {
		for (int j = 0; j < image->cols; j++) {

			//Call BFS() to include the pixel to a component
			//If the image pixel is not connected to any component
			if (!isConnected(connected, i, j)) {

				//Generate new color for the new component
				Color newColor = generateRandomColor();

				//Getting the current pixel RGB values
				Color oldColor = getColorStructureForPixel(image, i, j);

				//Calling BFS() to connect all pixel that has the same color with oldColor
				//and change their color to newColor
				BFS(image, connected, i, j, oldColor, newColor, directionMatrix);
			}

		}
	}

}

