#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int attend, topics;
    int x = 0, count = 0;
    cin >> attend >> topics;
    string s;
    vector <string> list;
    for (int i = 0; i < attend; i++) {
        cin >> s;
        list.push_back(s);
    }
    int x = 0;
    int count = 0;
    for (int i = 0; i < attend - 1; i++) {
        for (int j = i + 1; j < attend; j++) {
            int y = 0;
            for (int k = 0; k < topics; k++) {
                if (list[i][k] == '1' || list[j][x] == '1') x++;
            }
            if (x < y) {
                x = y;
                count = 1;
            }
            else if (x == y) {
                count++;
            }
        }
    }
    cout << x << endl;
    cout << count << endl;
    return 0;
}