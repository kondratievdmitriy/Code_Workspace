#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int matrix[a];
    for (int i = 0; i < a; i++) {
        cin >> matrix[i];
    }

    int start = 0;
    int len = 1;

    int current_start = 0;
    int length = 1;
    int prev_diff = matrix[1] - matrix[0];

    for (int i = 1; i < a; i++) {
        int diff = matrix[i] - matrix[i - 1];

        if (diff == prev_diff) {
            length++;
        } else {
            if (length > len) {
                len = length;
                start = current_start;
            }
            current_start = i - 1;
            length = 2;
            prev_diff = diff;
        }
    }

    if (length > len) {
        len = length;
        start = current_start;
    }

    for (int i = start; i < start + len; i++) {
        cout << matrix[i] << " ";
    }
    cout << endl;
    return 0;
}
