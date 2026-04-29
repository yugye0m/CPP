#include <iostream>
using namespace std;

class Complex {
public:
double real, imag;

Complex(double r = 0, double i = 0) : real(r), imag(i) {}

void print() const {
cout << real << " + " << imag << "i\n";
}

void add_member_void(const Complex& a, const Complex& b) {
real = a.real + b.real;
imag = a.imag + b.imag;
}

Complex add_member_return(const Complex& b) const {
return Complex(real + b.real, imag + b.imag);
}

Complex operator+(const Complex& b) const {
return Complex(real + b.real, imag + b.imag);
}
};

void add_global_void(const Complex& a, const Complex& b, Complex& result) {
result.real = a.real + b.real;
result.imag = a.imag + b.imag;
}

Complex add_global_return(Complex a, Complex b) {
return Complex(a.real + b.real, a.imag + b.imag);
}

int main() {
Complex a(1, 2);
Complex b(3, 4);
Complex c;

cout << "a = ";
a.print();

cout << "b = ";
b.print();

add_global_void(a, b, c);
cout << "c = ";
c.print();

c = add_global_return(a, b);
cout << "c = ";
c.print();

c.add_member_void(a, b);
cout << "c = ";
c.print();

c = a.add_member_return(b);
cout << "c = ";
c.print();

c = a + b;
cout << "c = ";
c.print();

return 0;
}

