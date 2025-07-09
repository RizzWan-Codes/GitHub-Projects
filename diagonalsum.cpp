#include <iostream>

using namespace std;

int main () {
	// Declare all the values.
	int c, r;
	int arr[100][100];
	char choice = 'y';

	// Add while loop for replay.
	while (choice == 'y' || choice == 'Y') {
		cout << "Enter Number Of Rows : ";
		cin >> r;

		// Take Input From User.
		cout << "Enter Number Of Columns : ";
		cin >> c;

		// Add limit.
		if (c > 100 || r > 100) {
			cout << "Error ! Maximum Limit = 100 !\n";
			continue;
		}

		// Only allow square matrices.
		if (r != c) {
			cout << "For Sum Of Diagonals, You Need A Square Matrix ! \n";
			continue;
		}

		// Take Elements of the Matrix from the user.
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << "Enter Element In [" << i << " , " << j << "]" << endl;
				cin >> arr[i][j];

			}
		}


		// Print the matrix.
		cout << "Here's Your Matrix : \n";
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {

				cout << arr[i][j] << "\t";

			}
			cout << endl;
		}

		// Define Addition For Primary And Secondary.
		int ps = 0;
		int ss = 0;
		for (int i = 0; i < r ; i++) {
			ps += arr[i][i];
			ss += arr[i][r - i - 1];
		}

		// Print the sum.
		cout << "Sum Of Primary Diagonal Is : " << ps << endl;
		cout << "Sum Of Secondary Diagonal Is : " << ss << endl;

		
		    // Ask user if they wanna play again. (That's why the while loop was used above)
			cout << "Do you wanna calculate again? (Y/N) : ";
			cin >> choice;

			
			if (choice == 'n' || choice == 'N') {
				break;
			}

			// Add Restrictions. Only Allow Y and N
			if (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y') {
				cout << "Only Choose Between Y and N!\n";
				
				
			}

			
		
	}


	// Return. The most basic thing if you did'nt know.
	return 0;

}