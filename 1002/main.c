#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i;
    int ip[10][4];
    char temp[10][33];
    for (i=0;i<x;i++){
        scanf("%s",temp[i]);
       // printf("%d",(int)temp[i][1]);
       int k;
       ip[i][0]=0;ip[i][1]=0;ip[i][2]=0;ip[i][3]=0;

for(k=7;k>=0;k--){ip[i][0]+=(int)(((int)(temp[i][7-k])-48)*pow(2,k));}
for(k=7;k>=0;k--){ip[i][1]+=(int)(((int)(temp[i][15-k])-48)*pow(2,k));}
for(k=7;k>=0;k--){ip[i][2]+=(int)(((int)(temp[i][23-k])-48)*pow(2,k));}
for(k=7;k>=0;k--){ip[i][3]+=(int)(((int)(temp[i][31-k])-48)*pow(2,k));}

    }

for(i=0;i<x;i++)printf("%d.%d.%d.%d\n",ip[i][0],ip[i][1],ip[i][2],ip[i][3]);
return 0;
}
