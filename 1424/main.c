#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int dao(x)
{ int xx;
xx=x;
    int Count =0;//用来计算位数
while(xx)
{
xx = xx/10;
Count++;
}
  int ANS,num;
   num=0;ANS=0;
while (Count-num!=0){
   ANS=ANS+pow(10,Count-num-1)*(x%10);
   x=x/10;num++;
}

return (int)ANS;
}

int main()
{int a,b,c,d;
d=0;
int ans[10000];int cc,ccc;
cc=1;
    while(scanf("%d+%d=%d",&a,&b,&c)!=EOF){
           // printf("%d",dao(a));
    if (dao(a)+dao(b)==dao(c))
    ans[cc]=1;
    else
       ans[cc]=0;
       cc++;
      if(a==0 && b==0 && c==0 )break;

       }
     for(ccc=1;ccc<cc;ccc++){
        if (ans[ccc]==1)
        printf("True\n");
      else
        printf("False\n");
}
    return 0;
}
