#include <iostream>
#include <string>
using namespace std;

int main() {
    const char* C[] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
    const char* X[] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
    const char* I[] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
    string a, res;
    cin >> a;

    // Если что, то это проверка на пустую строчку
    if (a.empty()) {
        cout << "" << endl;
        return 0;
    }

    int num = stoi(a);
    int thousands = num / 1000;
    int hundreds = (num % 1000) / 100;
    int tens = (num % 100) / 10;
    int units = num % 10;

    if (thousands > 0) {
        res += string(thousands, 'M');
    }
    res += C[hundreds];
    res += X[tens];
    res += I[units];
    cout << res << endl;
    return 0;
}

