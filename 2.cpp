// Многочлены степени n и m заданы массивами своих коэффициентов.
// Найти коэффициенты многочленов, являющихся суммой и произведением заданных многочленов.

#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int n, m;
    int arr1[a] = {0};
    int arr2[a] = {0};

    cin >> n;
    for (int i = n-1; i >= 0; i--) {
        cout << "coefficient x^" << i << ": ";
        cin >> arr1[i];
    }
    
    cin >> m;
    for (int i = m-1; i >= 0; i--) {
        cout << "coefficient x^" << i << ": ";
        cin >> arr2[i];
    }
    
    int s[a] = {0};
    for (int i = 0; i < max(n, m); i++) {
        s[i] = arr1[i] + arr2[i];
    }

    int p[2 * a] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            p[i + j] += arr1[i] * arr2[j];
        }
    }

    cout << "sum of polynomials: " << endl;
    for (int i = max(n, m) - 1; i >= 0; i--) {
        cout << s[i] << " ";
    }
    cout << endl;

    cout << "product of polynomials: " << endl;
    for (int i = n + m - 2; i >= 0; i--) {
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}
