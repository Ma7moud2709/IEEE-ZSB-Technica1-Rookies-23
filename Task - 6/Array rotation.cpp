#include <iostream>
using namespace std;

int main()
{
    int n, i, k, q, temp;
    cin >> n >> k >> q;
    int *array = new int[n];

    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    k = k % n;
    for (int i = 0; i < q; i++) {
        cin >> temp;
        cout << array[(n - k + temp) % n] << endl;
    }
    return 0;
}
