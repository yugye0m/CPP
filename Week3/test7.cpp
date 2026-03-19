#include <iostream>

int main() {
    int n
    cin >> n;

    int a = n / 10000;
    int b = (n % 10000) / 1000;
    int c = (n % 1000) / 100;
    int d = (n % 100) / 10;
    int e = n % 10;

    if (a > 0) {
        if (a > 1) cout << a;
        cout << "만";
    }
    if (b > 0) {
        if (b > 1) cout << b;
        cout << "천";
    }
    if (c > 0) {
        if (c > 1) cout << c;
        cout << "백";
    }
    if (d > 0) {
        if (d > 1) cout << d;
        cout << "십";
    }
    if (e > 0)
        cout << e;

    return 0;
}
