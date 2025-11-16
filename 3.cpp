// Заданы координаты N точек плоскости. Найти такие три точки,
// на которых можно построить тупоугольный треугольник с углом наибольшей градусной меры.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const int m = 30;
    int N;
    cin >> N;
    
    if (N < 3 || N > m) {
        cout << "NO" << endl;
        return 0;
    }

    double x[m], y[m];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    double q = -1.0;
    int bi = -1, bj = -1, bk = -1;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                double a2 = (x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]);
                double b2 = (x[i] - x[k]) * (x[i] - x[k]) + (y[i] - y[k]) * (y[i] - y[k]);
                double c2 = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);

                if (a2 == 0.0 || b2 == 0.0 || c2 == 0.0) continue;

                for (int e = 0; e < 3; e++) {
                    double d;
                    if (e == 0) {
                        d = (b2 + c2 - a2) / (2 * sqrt(b2) * sqrt(c2));
                    } else if (e == 1) {
                        d = (a2 + c2 - b2) / (2 * sqrt(a2) * sqrt(c2));
                    } else {
                        d = (a2 + b2 - c2) / (2 * sqrt(a2) * sqrt(b2));
                    }

                    if (d < -1.0) {
                        d = -1.0;
                    }
                    if (d > 1.0) {
                        d = 1.0;
                    }
                    if (d < 0.0) {
                        double d2 = acos(d);
                        if (d2 > q) {
                            q = d2;
                            bi = i;
                            bj = j;
                            bk = k;
                        }
                    }
                }
            }
        }
    }

    if (q < 0.0) {
        cout << "NO" << endl;
    } else {
        cout << (bi + 1) << ' ' << (bj + 1) << ' ' << (bk + 1) << endl;
        cout << x[bi] << ' ' << x[bj] << ' ' << x[bk] << endl;
        cout << y[bi] << ' ' << y[bj] << ' ' << y[bk] << endl;
        double degrees = q * 180.0 / M_PI;
        cout << fixed << setprecision(3) << degrees << endl;
    }

    return 0;
}
