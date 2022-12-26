#include <iostream>
#include <algorithm>    //Sort
#include <math.h>       //Min & Max
using namespace std;
int main()
{
    int n, m, max_dis = 0;
    cin >> n >> m;
    int city[100]; // city[n]
    for (int i = 0; i < m; i++) {
        cin >> city[i];
    }

    sort(city, city + m);

    for (int i = 0; i <= city[0]; i++) {
        max_dis = max(max_dis, city[0] - i);
    }
    //Calc max distance  
    for (int i = 0; i < (m - 1); i++) {
        for (int j = city[i]; j <= city[i + 1]; j++) {
            max_dis = max(max_dis, min(j - city[i], city[i + 1] - j));
        }
    }
    cout << max_dis << endl;
}