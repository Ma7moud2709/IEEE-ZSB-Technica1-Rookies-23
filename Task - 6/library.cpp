#include <iostream>
using namespace std;

int main() {
	int d1, m1, y1,
		d2, m2, y2;
	while (cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2) {
		// 15 10 2020
		// 15 8 2020
		int fine = 0;

		if (d1 == d2 && m1 == m2 && y1 == y2) {
			fine = 0;
		}
		else if (d1 > d2 && m1 == m2 && y1 == y2) {
			fine = 1;
		}
		else if (m1 > m2 && y1 == y2) {
			fine = 2;
		}
		else if (y1 > y2) {
			fine = 3;
		}

		switch (fine) {
		case 0:
			cout << "0" << endl;
			break;

		case 1:
			cout << (d1 - d2) * 15 << endl;
			break;
		case 2:
			cout << (m1 - m2) * 500 << endl;
			break;
		case 3:
			cout << (y1 - y2) * 10000 << endl;
			break;
		}
	}
}