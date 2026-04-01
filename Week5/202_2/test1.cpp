#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void a(int map[SIZE][SIZE])
{
for(int i=0;i<SIZE;i++)
{
for(int j=0;j<SIZE;j++)
{
map[i][j] = r() % 2; // 0 또는 1
}
}
}

void b(int map[SIZE][SIZE])
{
printf("\n===== MAP =====\n");

for(int i=0;i<SIZE;i++)
{
for(int j=0;j<SIZE;j++)
{
printf("%d ", map[i][j]);
}
printf("\n");
}
}

void c(int map[SIZE][SIZE])
{
int same;

for(int i=0;i<SIZE;i++)
{
same = 1;
for(int j=1;j<SIZE;j++)
{
if(map[i][0] != map[i][j])
same = 0;
}
if(same)
printf(" \n");
}

for(int j=0;j<SIZE;j++)
{
same = 1;
for(int i=1;i<SIZE;i++)
{
if(map[0][j] != map[i][j])
same = 0;
}
if(same)
printf(" \n");
}

same = 1;
for(int i=1;i<SIZE;i++)
{
if(map[0][0] != map[i][i])
same = 0;
}
if(same)
printf(" \n");

same = 1;
for(int i=1;i<SIZE;i++)
{
if(map[0][SIZE-1] != map[i][SIZE-1-i])
same = 0;
}
if(same)
printf(" \n");
}

int main()
{
int map[SIZE][SIZE];

s(time(NULL));

a(map);
b(map);
c(map);

return 0;
}
