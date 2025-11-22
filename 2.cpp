// В заданной вещественной матрице вычислить количество нулевых строк.

#include <iostream>
using namespace std;

int main() {
    int n, m, res = 0;
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int [m];
        int a = 0;
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                a++;
            }
        }
        if (a == m) {
            res++;
        }
    }
    cout << res << endl;
}