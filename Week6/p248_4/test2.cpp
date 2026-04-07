#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 40
#define COL 80

int MineMask[ROW][COL];
int MineLabel[ROW][COL];

void placeMine(int n)
{
int r,c,count=0;
srand(time(NULL));

while(count<n)
{
r=rand()%ROW;
c=rand()%COL;

if(MineMask[r][c]==0){
MineMask[r][c]=1;
count++;
}
}
}

int countMine(int r,int c)
{
int dr[8]={-1,-1,-1,0,0,1,1,1};
int dc[8]={-1,0,1,-1,1,-1,0,1};
int cnt=0;

for(int i=0;i<8;i++){
int nr=r+dr[i], nc=c+dc[i];
if(nr>=0 && nr<ROW && nc>=0 && nc<COL)
cnt+=MineMask[nr][nc];
}
return cnt;
}

void makeLabel()
{
for(int r=0;r<ROW;r++)
for(int c=0;c<COL;c++)
MineLabel[r][c]=
(MineMask[r][c]? -1 : countMine(r,c));
}

void printMap()
{
for(int r=0;r<ROW;r++){
for(int c=0;c<COL;c++){
if(MineLabel[r][c]==-1) printf("* ");
else printf("%d ",MineLabel[r][c]);
}
printf("\n");
}
}

int main()
{
placeMine(200);
makeLabel();
printMap();
return 0;
}
