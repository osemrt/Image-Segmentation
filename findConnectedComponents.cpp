#include "header_files/declarations.h"

void findConnectedComponents(Mat* image) {


	bool** connected = createConnectedMatrix(image->rows, image->cols);
	int** directionMatrix = createDirectionMatrix();

	for (int i = 0; i < image->rows; i++) {
		for (int j = 0; j < image->cols; j++) {

			if (!isConnected(connected, i, j)) {
				Color newColor = generateRandomColor();
				Color oldColor = getColorStructureForPixel(image, i, j);


				BFS(image, connected, i, j, oldColor, newColor, directionMatrix);





			}

		}
	}



}

