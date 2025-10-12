#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, a = 0, b = 1;
    string result;
    cin >> N;
    while (result.size() < N) {
        result += to_string(a);
        unsigned int c = a + b;
        a = b;
        b = c;
    }
    cout << result[result.length() - 1] << endl;
    return 0;
}
