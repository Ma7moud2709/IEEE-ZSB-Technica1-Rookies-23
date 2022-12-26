#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vector<char> test = { 'k', 'n', 'a', 'r', 'r', 'e', 'k', 'c', 'a', 'h' };
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == test[test.size() - 1])
                test.pop_back();
        }

        if (test.size() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}
