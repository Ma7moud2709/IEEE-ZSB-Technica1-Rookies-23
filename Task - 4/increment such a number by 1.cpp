#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	int sum = 0, remainder;;
	cin >> n;
	int temp = pow(10, n - 1);
	int arr[10], n_arr[10];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i] * temp;
		temp /= 10;
	}
	sum ++;
}