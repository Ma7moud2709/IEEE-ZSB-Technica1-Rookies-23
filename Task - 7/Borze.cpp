#include <iostream>
#include<string>
using namespace std;

int main() {
	string S1, S2;
	cin >> S1;
	int len = S1.length();
	for (int i = 0; i < len; i++)

	{
		if (S1[i] == '.') {
			S2 += '0';
		}
		if (S1[i] == '-' && S1[i + 1] == '.') {
			S2 += '1';
			++i;

		}
		if (S1[i] == '-' && S1[i + 1] == '-') {
			S2 += '2';
			++i;
		}

	}
	cout << S2;

	return 0;
}