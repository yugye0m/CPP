#include <iostream>
using namespace std;

void playGuguOnce()
{
int a, b, c;

cout << " ";
cin >> a >> b;

cout << a << " x " << b << " = ";
cin >> c;

if c == a*b) cout << "정답\n";
else cout << "오답\n";
}

void mul()
{
int a, b, c;

cout << " ";
cin >> a >> b;

cout << a << " x " << b << " = ";
cin >> c;

if c == a*b) cout << "정답\n";
else cout << "오답\n";
}

void add(int n)
{
int a, b, c;

cout << n << " ";
cin >> a >> b;

cout << a << " + " << b << " = ";
cin >> c;

if c == a+b) cout << "정답\n";
else cout << "오답\n";
}

int main()
{
int menu;

cout << "1:구구단 2:두자리곱셈 3~9:덧셈\n";
cin >> menu;

if(menu==1) playGuguOnce();
else if(menu==2) mul();
else if(menu>=3 && menu<=9)
add(menu);

return 0;
}
