#include <iostream>
using namespace std;

int main() {
	int Num, Fact = 1;
	cout << "Enter a positive number :";
	cin >> Num;
	//Check for positive num
	if (Num < 0) {
		cout << "Negative number";
	}
	//Factorial of 0 is 1
	else if (Num == 0) {
		cout << "Factorial of 0 is 10";
	}
	//calc the Factorial 
	else {
		for (int i = 1; i <= Num; i++)
			Fact = Fact * i;
	}
	//display the Factorial
	cout << "Factorial of " << Num << " = " << Fact <<endl;
}
