#include <iostream>
using namespace std;

int main() {
    int num, page, turns = 0;
    cin >> num >> page;

    // while num < page :|
    while (num < page) {
        cout << "INVALID INPUT" << endl;
    }

    //Program
    if (num == page || page == 1) {
        turns = 0;
    }

    else {
        turns = page / 2; //integer
    }
    cout << turns << endl;
    return 0;
}
