#include <stdio.h>

struct MyTime {
int hour, min, sec, msec;
};

struct MyTime addTime(struct MyTime t1, struct MyTime t2)
{
struct MyTime r;

r.msec = t1.msec + t2.msec;
r.sec = t1.sec + t2.sec;
r.min = t1.min + t2.min;
r.hour = t1.hour + t2.hour;

r.sec += r.msec / 1000; r.msec %= 1000;
r.min += r.sec / 60; r.sec %= 60;
r.hour += r.min / 60; r.min %= 60;

return r;
}

void addTime2(struct MyTime t1, struct MyTime t2, struct MyTime *t3)
{
*t3 = addTime(t1, t2);
}

void addTime3(struct MyTime *t1, struct MyTime *t2, struct MyTime *r)
{
*r = addTime(*t1, *t2);
}

int main()
{
struct MyTime a = {1,2,30,500};
struct MyTime b = {0,10,40,800};
struct MyTime c;

c = addTime(a,b);
printf("%02d:%02d:%02d:%03d\n",c.hour,c.min,c.sec,c.msec);

addTime2(a,b,&c);
addTime3(&a,&b,&c);

return 0;
}

