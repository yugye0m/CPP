#include <iostream>
#include <string>
using namespace std;

struct Word{
    string eng;
    string kor;
};

class MyDic{
    public:
    Word w[10];
    int n = 0;

    void add (string e, string k) {
        w[n].eng = e;
        w[n].eng = k;
        n++;
    }

    void print(){
        for (int i = 0; i < n; i++){
            cout << w[i].eng << ":"
                 << w[i].kor << endl;
        }
    }
};

int main(){
    MyDic d;
    d.add("apple", "사과");
    d.add("dog", "개");

    d.print()

    return 0;
}
