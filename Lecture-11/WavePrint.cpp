#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int r, c;

	cout << "Enter row and columns ";
	cin >> r >> c;
	int number = 1;
	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			a[row][col] = number++;
		}
	}

	for (int row = 0 ; row < r; row++) {
		for (int col = 0 ; col < c ; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}

	cout << "Wave Print ";
	for (int col = 0 ; col < c ; col++) {
		// Check if its even or odd
		if (col % 2 == 0) {
			// Even Column -> Print row from 0 to r-1
			for (int row = 0 ; row < r ; row++) {
				cout << a[row][col] << " ";
			}
		}
		else {
			// Odd Column-> Print row from r-1 to 0
			for (int row = r - 1; row >= 0; row--) {
				cout << a[row][col] << " ";
			}
		}
	}
	cout << endl;
	return 0;
}












