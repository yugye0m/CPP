#include <iostream>

int main() {
    int n
    cin >> n;

    int a = n / 10000;
    int b = (n % 10000) / 1000;
    int c = (n % 1000) / 100;
    int d = (n % 100) / 10;
    int e = n % 10;

    if (a != 0) cout << a << "만";
    if (b != 0) cout << b << "천";
    if (c != 0) cout << c << "백";
    if (d != 0) cout << d << "십";
    if (e != 0) cout << e <<

    return 0;
}
