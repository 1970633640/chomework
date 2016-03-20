#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,c,d,e,f;
   int n,i,x;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&x);
       a=x/100;x=x-a*100;
       b=x/50;x=x-b*50;
       c=x/20;x=x-c*20;
       d=x/10;x=x-d*10;
       e=x/5;x=x-e*5;
       f=x;
printf("case #%d:\n%d %d %d %d %d %d\n",i,a,b,c,d,e,f);


   }


    return 0;
}
