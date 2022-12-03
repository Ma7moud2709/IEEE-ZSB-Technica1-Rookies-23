#include <iostream>
#include <string>
using namespace std;
bool subseq(string str);

int main() {

	string str;
	cin >> str;

	if (subseq(str)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
bool subseq(string str) {

	string o_str = "hello";

	if (str.length() < o_str.length()) {
		return false;
	}
	int i = 0;
	for (int i = 0; i < str.length(); i++) {
		if (o_str[i] == str[i]) {
			i++;
		}
	}
	if (i == o_str.length()) return true;

	return false;
}