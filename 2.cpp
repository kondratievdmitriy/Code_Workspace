#include <iostream>
using namespace std;

int main() {
    const int a = 8;
    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);

    bool b = true;
    for (int i = 0; i < a; i++) {
        if (s1[i] != s2[a - 1 - i]) {
            b = false;
            break;
        }
    }
    if (b)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}

