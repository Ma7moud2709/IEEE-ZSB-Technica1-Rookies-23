#include <iostream>
using namespace std;

int main() {
    int Num ,Reverse = 0;

    cout << "Enter a number: ";
    cin >> Num;
    int Original = Num;
    while (Num > 0) {
        Reverse = Reverse * 10 + Num % 10;
        Num = Num / 10;
    }
    cout << Reverse << endl;

    if (Original == Reverse) {
        cout << "Yes";
    }
    else
        cout << "No";
}