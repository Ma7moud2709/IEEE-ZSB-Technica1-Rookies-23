#include <iostream>
using namespace std;

int main() {
	int Num1, Num2, GCD = 0;
	char Choice;

	do {
		cout << "Enter 1st number : ";
		cin >> Num1;
		cout << "Enter 2nd number : ";
		cin >> Num2;
		//calc the GCD
		for (int i = 1; i <= Num1; i++) {
			if (Num1 % i == 0 && Num2 % i == 0) {
				GCD = i;
			}
		}
		//Display the GCD
		cout << "GCD of " << Num1 << " And " << Num2 << " = " << GCD << endl;
		//Ask for try again
		cout << "Again? " << endl;
		cin >> Choice;
	} while (Choice == 'Y' || Choice == 'y');
}