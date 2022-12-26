#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		stack<long long>list;
		for (int i = 0; i < n; i++) {
			long long x;
			cin >> x;
			while (!(list.empty()) && list.top() < x && k > 0) {
				list.pop();
				k--;
			}
			list.push(x);
		}
		vector<long long>n_list;
		while (!(list.empty())) {
			n_list.push_back(list.top());
			list.pop();
		}
		reverse(n_list.begin(), n_list.end());
		for (int i = 0; i < n_list.size(); i++) {
			cout << n_list[i] << " ";
		}
		cout << '\n';
	}
}