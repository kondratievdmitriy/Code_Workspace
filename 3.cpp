// По заданному натуральному n сгенерировать матрицу

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int **arr = new int*[n - 1];
    arr[0] = new int[n - 1];
    for (int j = 0; j < n - 1; j++) {
        arr[0][j] = j + 1;
    }

    for (int i = 1; i < n - 1; i++) {
        arr[i] = new int[n - 1];
        int a = arr[i - 1][n - 2];
        arr[i][0] = a;
        for (int j = 1; j < n - 1; j++) {
            arr[i][j] = (arr[i][j - 1] % (n - 1)) + 1; // Как счётчик. Когда пред. эл. равен n-1 => обнуляем счетчик и идём дальше
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
