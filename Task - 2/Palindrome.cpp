#include <iostream>
using namespace std;

int main() {

		char str[10];
		int length;
		bool flag = true;

		cin >> str;
		length = strlen(str);

		for (int i = 0; i < length; i++) {

			if (str[i] != str[length - i -1]) {
				
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "yes\n";
		}
		else
			cout << "no\n";

	return 0;
}