#include <iostream>
#include <cmath>
using namespace std;
/*
-get last dig
-squar last dig
-sum =+squar last dig
-if sum != 1
-loop && sum = 0 && len
- if sum = 1
-end
*/
int main() {
	int num, len = 0, l_digit , sum = 0;
	cin >> num;
	
	//loop
	do {
		sum = 0;
		len = 0;
		//store the num
		int num2 = num;

		//get num of digit
		while (num > 0) {
			num /= 10;
			len++;
		}

		//get last digit
		for (int i = 0; i < len; i++) {
			l_digit = num2 % 10;
			num2 /= 10;
			sum += pow(l_digit, 2);
		}

		//check 
		if (sum > 10) {
			num = sum;
		}
		else if (sum == 1) {
			cout << "true";
			break;
		}
		else {
			cout << "False";
			break;
		}
	}
	while (sum > 10);
}