#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int A[10] = {0}; 
    int b = 0;
    while (a > 0) {
        A[b] = a % 10;
        a /= 10;
        b++;
    }
    for (int i = 0; i < b - 1; i++) {
        for (int j = 0; j < b - i - 1; j++) {
            if (A[j] < A[j + 1]) {
                int c = A[j];
                A[j] = A[j + 1];
                A[j + 1] = c;
            }
        }
    }
    for (int i = 0; i < b; i++) {
        cout << A[i];
    }
    cout << endl;

    return 0;
}
