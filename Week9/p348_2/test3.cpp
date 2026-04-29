#include <iostream>
using namespace std;

class MyTime {
public:
int h, m, s, ms;

MyTime(double duration) {
h = (int)(duration / 3600);
duration -= h * 3600;

m = (int)(duration / 60);
duration -= m * 60;

s = (int)duration;
ms = (int)((duration - s) * 1000);
}

void print() {
cout << h << ":" << m << ":" << s << "." << ms << endl;
}
};

int main() {
MyTime t(3661.5);
t.print(); 
}
