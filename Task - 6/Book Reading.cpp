#include <iostream>
using namespace std;

int main() {
	long days, Reading_sec, Work_sec;
	long count = 0;
	long Done = 0;
	cin >> days >> Reading_sec;
	while (days != 0) {
		cin >> Work_sec;
		Done = (86400 - Work_sec) + Done;
		count++;
		if (Reading_sec <= Done) {
			break;
		}
		days--;
	}
	cout << count;
}