#include <iostream>
using namespace std;

class Monster {
public:
int energy;

Monster() : energy(100) {}

void eat(bool success) {
if (success) energy += 8;
else {
energy -= 1;
if (energy < 0) energy = 0;
}
}

void print() {
cout << "Energy: " << energy << endl;
}
};

int main() {
Monster m;

m.print(); 

m.eat(true); 
m.print(); 

m.eat(false); 
m.print(); 
}

