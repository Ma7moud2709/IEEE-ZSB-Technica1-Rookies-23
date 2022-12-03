#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	int A, B, C;
	int A1, B1, C1;
	int score = 0 , miss = 0;
	//user number
	int u_Number;
	cin >> u_Number;

	//seperate digits of user num
	A1 = u_Number / 100;
	B1 = (u_Number/10)%10;
	C1 = u_Number % 10;
	
	//Random generate 3-digts
	A = rand() % 10;
	B = rand() % 10;
	C = rand() % 10;

	//Make num with th 3-dig
	int Num = A * 100 + B * 10 + C;
	cout << Num << endl;

	//Program

	if ((A1 == A) || (A1 == B) || (A1 == C)) {
		score++;
	}
	else
		miss++;

	if ((B1 == A) || (B1 == B) || (B1 == C)) {
		score++;
	}
	else
		miss++;
	if ((C1 == A) || (C1 == B) || (C1 == C)) {
		score++;
	}
	else
		miss++;
	//display the result 
	cout << score << " hit " << " " << miss << " miss ";
	return 0;
}