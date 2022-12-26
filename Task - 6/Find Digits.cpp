#include <iostream>
using namespace std;

int main() {

	int num, l_digit;

	while (cin >> num) {
		int tmp = num;
		int count = 0;

		if (num < 10) {
			continue;
		}
		else
		{
			while (num != 0) {

				l_digit = num % 10;
				num = num / 10;
			
				if (l_digit != 0 && tmp % l_digit == 0) {
					count++;
				}
			}
			cout << count << endl;
		}
	}
}