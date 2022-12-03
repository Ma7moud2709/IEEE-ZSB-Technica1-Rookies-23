#include <iostream>
using namespace std;

int main() {
	
	int num, prev = 0;
	int list[100];
	int i = 0;

	cout << " Enter positive numbers" << endl;
	cout << " Enter negative number to exit the list" << endl << endl;

	while (cin >> num && num > 0) {

		if (num == prev) {
			continue ;
		}
		list[i] = num;
		i++;
		prev = num;
	}
	for (int j = 0; j < i; j++) {
		cout << list[j] << " ";
	}
	return 0;
}