// Задана строка, в которой слова разделены одним или несколькими пробелами.
// Выполнить сжатие строки, оставив между словами только по одному пробелу. Сжатие выполнить на том же месте.

#include <iostream>
using namespace std;

int main() {
    string s;
    int a = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            a++;
            if (a > 1) {
                s = s.substr(0, i) + s.substr(i+1, s.length());
                i--;
            }
        } else {
            a = 0;
        }
    }
    cout << s << endl;
}

// Можно вместо строчки с substr использовать s.erase(i, 1);