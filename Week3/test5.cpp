#include <iostream>

int main() {
    int n
    cin >> n;

    int a = n / 10000;
    int b = (n % 10000) / 1000;
    int c = (n % 1000) / 100;
    int d = (n % 100) / 10;
    int e = n % 10;

    if (a) cout << a << "만";
    if (b) cout << b << "천";
    if (c) cout << c << "백";
    if (d) cout << d << "십";
    if (e) cout << e <<

    return 0;
}
