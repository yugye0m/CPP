#include <iostream>
using namespace std;

class Monster {
protected:
int x, y;

public:
Monster(int xx, int yy) : x(xx), y(yy) {}

virtual void move() {}
};

class Smombi : public Monster {
public:
Smombi(int x, int y) : Monster(x, y) {}

void move() {
x++;
y++;
}
};


class Siangshi : public Monster {
public:
Siangshi(int x, int y) : Monster(x, y) {}

void move() {
x += 2;
}
};

class FastMonster : public Monster {
public:
FastMonster(int x, int y) : Monster(x, y) {}

void move() {
x += 3;
y += 3;
}
};

int main() {
Smombi s(0,0);
Siangshi si(1,1);
FastMonster f(2,2);

s.move();
si.move();
f.move();

return 0;
}

