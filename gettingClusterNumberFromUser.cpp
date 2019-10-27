#include "header_files/declarations.h"

//A function to get the cluster number from the user
//It pops up until the user typing a valid cluster number
int gettingClusterNumberFromUser() {

	//CSI[2J clears screen,
	//CSI[H moves the cursor to top-left corner
	cout << "\x1B[2J\x1B[H";		   
	int n;

	do {

		cin.clear();
		cout << "Now, enter a number for the # of clusters: ";
		cin.ignore();

		cin >> n;

		if (cin.fail()) {
			//CSI[2J clears screen
			//CSI[H moves the cursor to top-left corner
			cout << "\x1B[2J\x1B[H";		    
			cout << "Are you sure you entered a valid number?" << endl;
		}		

	} while (cin.fail());

	return n;
}