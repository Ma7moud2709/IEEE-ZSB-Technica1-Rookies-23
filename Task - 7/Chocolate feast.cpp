#include <iostream>
using namespace std;


int main() {
    int t, n, c, m, w, temp;
    cin >> t;
    while (t--) {
        cin >> n >> c >> m;
        w = n / c;
        temp = w;
        while (w >= m) {
            temp += w / m;
            w = (w % m) + w / m;
        }
        cout << temp << "\n";
    }
    return 0;
}