#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int matrix[a];
    for (int i = 0; i < a; i++) {
        cin >> matrix[i];
    }
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

    for (int i = 0; i < a; i++) {
        if (matrix[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = matrix[i];
        } else if (matrix[i] > max2) {
            max3 = max2;
            max2 = matrix[i];
        } else if (matrix[i] > max3) {
            max3 = matrix[i];
        }
    }

    cout << max1 << " " << max2 << " " << max3 << endl;

    return 0;
}
