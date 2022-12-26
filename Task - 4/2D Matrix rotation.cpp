#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int matrix[100][100];

	for (int rows = 0; rows < n; rows++) {
		for (int row = 0; row < n; row++) {
			cin >> matrix[rows][row];
		}
	}

	// rotation

	for (int i = 0; i < n; i++) {
		for (int j = (n-1) ; j >= 0 ; j--) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}

}