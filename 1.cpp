// Заданы две матрицы. Получить матрицу, являющуюся суммой заданных матриц.

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << "Enter the first matrix:" << endl;
    int **arr1 = new int *[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = new int [m];
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the second matrix:" << endl;
    int **arr2 = new int *[n];
    for (int i = 0; i < n; i++) {
        arr2[i] = new int [m];
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    cout << "Finish matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}