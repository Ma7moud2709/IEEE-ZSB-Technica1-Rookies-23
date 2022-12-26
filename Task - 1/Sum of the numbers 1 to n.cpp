#include <iostream>
using namespace std;

int main() {
	int Num, Sum = 0;

	cout << "Enter the max number : ";
	cin >> Num;
	//check if num = 1
	while (Num == 1) {
		cout << "The max number must be bigger than 1" << endl;
		cout << "Enter the max number : ";
		cin >> Num;
	}
	//Calc the sum
	if (Num > 1) {

		for (int i = 1; i <= Num; i++) {

			Sum = Sum + i;
		}
	}
	//Display the output
	cout << "Sum from 1 to " << Num << " = " << Sum;
}