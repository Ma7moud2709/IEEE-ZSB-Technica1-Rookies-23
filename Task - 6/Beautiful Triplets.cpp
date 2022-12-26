#include <iostream>
using namespace std;

int main() {
    int n, d, i = 0;
    int arr[10000];  // int arr[n]
    int count = 0;
    cin >> n >> d;
    /*
    arr[j] - arr[i] == arr[k] - arr[j] == d
    arr[] = {1 , 2 , 4 , 5 , 7 , 8 , 10}
    -----------------------------------
    then j = i+1 && k = i+2
    */
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = i + 2; k < n; k++) {
                    if (arr[k] - arr[j] == d) {
                        count++;
                        break;   //break loop num3
                    }
                }
                break;  //break loop num2
            }

        }

    }
    cout << count << endl;
    return 0;
}