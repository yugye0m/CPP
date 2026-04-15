#include <iostream>
using namespace std;
class MyTime{
    public:
    int h, m, s;
    
    void convert(int t){
        h = t/3600;
        m = (t % 3600) / 60;
        s = t % 60;
    }

    void print(){
        cout << h << ":" << m << ":" << s << endl;
    }

    MyTime add(MyTime t){
        MyTime r;

        r.s = s + t.s;
        r.m = m + t.m + r.s / 60;
        r.s %= 60;

        return r;
    }
};

int main(){
    MyTime a, b, c;

    a.convert(3600);
    b.convert(120);

    c = a.add(b);

    c.print()

    return 0;
}
