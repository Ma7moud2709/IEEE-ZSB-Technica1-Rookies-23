#include <iostream>
using namespace std;
int arr[3][3];



int main() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int x;
			cin >> x;

			arr[i][j] += x;

			if (j + 1 < 3) {
				arr[i][j + 1] += x;
			}
			if (j - 1 > -1) {
				arr[i][j - 1] += x;
			}
			if (i + 1 < 3) {
				arr[i + 1][j] += x;
			}
			if (i - 1 > -1) {
				arr[i - 1][j] += x;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			if (arr[i][j] % 2 == 0) {
				cout << "1";
			}
			else
				cout << "0";
		}
		cout << endl;
	}
}
