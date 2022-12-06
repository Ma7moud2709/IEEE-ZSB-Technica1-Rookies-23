#include <iostream>
using namespace std;

int main() {

	int r_vol[100];
	int cap[100];
	int remain = 0, s_bottles = 0;
	int n;

	bool flag = false;

	cout << "Num of bottles : ";
	cin >> n;

	// Sum of the remain
	for (int i = 0; i < n; i++) {
		cin >> r_vol[i] >> cap[i];
		remain += r_vol[i];
	}
	cout << "remain = " << remain << endl;
	// compare Sum with 2 bottles capicity
	for (int j = 0; j < n; j++) {
		for (int f = 1; f < n; f++) {
			if (cap[j] != cap[f]){
				s_bottles = (cap[j] + cap[f]);
				cout << cap[j] << " + " << cap[f] << "=" << s_bottles << endl;
				if (remain <= s_bottles) {
					flag = true;
					break;
				}
			}
		}
	}

	// Yes or no
	if (flag) {
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
}