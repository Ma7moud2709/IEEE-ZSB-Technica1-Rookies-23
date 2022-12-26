/*
insertion Sort for array:

* mark elements as sorted
*  for each unsorted element X:
    *Compare it to the next items
    *if the next element < X
    * move it to the left
*loop

Insertion Sort Complexity
    *Time Complexity:
        *The best-case  O(n)
        *The worst-case	O(n2)
    *Space Complexity	O(1)
    *Stability	Yes
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = { 13, 7, 12, 1, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (temp < arr[j]) {
            if (j < 0) {
                break;
            }
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
