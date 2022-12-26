#include <iostream>
using namespace std;

int main() {
	int Num, Sum = 0, i = 0;

	cout << "Enter Number of digits: ";
	cin >> Num;

	int list[Num];

	//for loop

	for (i; i < Num; i++) {
		cin >> list[i];

		Sum = Sum + list[i];
	}
	cout << "Sum using for loop = " << Sum << endl;

	//------------------------

	//while loop

	while (i < Num) {

		cin >> list[i];

		Sum = Sum + list[i];
		i++;
	}
	cout << "Sum using while loop = " << Sum << endl;
}
