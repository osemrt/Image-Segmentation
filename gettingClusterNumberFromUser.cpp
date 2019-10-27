#include "header_files/declarations.h"

int gettingKValueFromUser() {

	cout << "\x1B[2J\x1B[H";		    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
	int n;

	do {

		cin.clear();
		cout << "Now, enter a number for the # of clusters: ";
		cin.ignore();

		cin >> n;

		if (cin.fail()) {
			cout << "\x1B[2J\x1B[H";		    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
			cout << "Are you sure you entered a valid number?" << endl;
		}		

	} while (cin.fail());

	return n;
}