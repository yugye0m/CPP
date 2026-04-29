#include <iostream>
using namespace std;

class MyTime {
public:
int h, m, s, ms;

MyTime(int h, int m, int s, int ms)
: h(h), m(m), s(s), ms(ms) {}

MyTime() : h(0), m(0), s(0), ms(0) {}

void print() {
cout << h << ":" << m << ":" << s << "." << ms << endl;
}
};

int main() {
MyTime t1(1,2,3,4);
MyTime t2;

t1.print(); 
t2.print();
