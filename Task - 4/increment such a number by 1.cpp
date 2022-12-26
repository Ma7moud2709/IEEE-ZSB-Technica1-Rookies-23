#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;
    int arr[50] = {};
    bool flag = true;
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    reverse(arr, arr + num);
    
    for (int i = 0; i < num; i++) {
        if (arr[i] < 9) {
            arr[i]++;
            flag = false;
            break;
        }
        else {
            arr[i] = 0;
        }
    }
    if (flag) cout << 1 << " ";
    for (int i = num - 1; i >= 0; i--) {
        cout << arr[i] << " \n"[i == 0];
    }
}
