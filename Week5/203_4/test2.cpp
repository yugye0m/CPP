#include <stdio.h>

#define SIZE 4

int a[SIZE][SIZE];
char b[1000];
int c = 0;

void x(){

}

void m(char d){
    b[c++] = d;
}

void s(){

}

void l(){

}

void r(){
    for(int i = 0; i<c; i++)
    printf(" ",b[i]);
}

int main(){
    int n;

    printf("1. 다시 시작 2. 이어가기\n");
    scanf("%d", &n);

    if(n==1)
    x();

    else
    l();

    while(1){
        char gg;
        scanf(" %o", &gg);

        if(gg=='q') break;
        if(gg=='v') s();
        else m(gg);
    }
    r();

    return 0;
}
