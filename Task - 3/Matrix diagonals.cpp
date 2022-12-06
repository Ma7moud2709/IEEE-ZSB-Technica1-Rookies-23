#include <iostream>
using namespace std;

int main() {
	int L_diag = 0, R_diag = 0;
	int Dim;
	cin >> Dim;
	int size = Dim;
	int matrix[size][size];
	cout << "Enter the numbers " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix[i][j];
			if (i == j) {
				L_diag += matrix[i][j];
			}
			if ((i + j) == size - 1) {
				R_diag += matrix[i][j];
			}
		}
	}
	int sum = L_diag - R_diag;

	if (sum < 0) {
		sum = sum * -1;
	}
	cout << "Sum = " << sum;
}
