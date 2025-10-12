#include <iostream>
using namespace std;

int main () {
    int a, b, c = 0;
    cin >> a;
    while (a > 0) {
        b = a % 10;
        if (a % b == 0) {
            c += 1;
        } else {
            c = c;
        }
        a /= 10;
    }
    if (c > 0) {
        cout << "delitsa" << endl;
    } else {
        cout << "ne delitsa" << endl;
    }
}