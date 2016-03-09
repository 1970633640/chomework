#include <stdio.h>
#include <stdlib.h>
int judge(x)
{
 int temp,flag;
 flag=1;
 for(temp=2;temp<x;temp++){
        if (x%temp==0)flag=0;break;}
   if (flag==0)   return 5;

   if (flag==1)     return 6;
}


int main()
{
   int x,m;
   scanf("%d",&x);
   int flag[10000]={0};
int a;a=2;
while(a*a<=x){
    if (judge(a)==6)
       {

        for(m=2;m<=x/a;m++)flag[m*a]=1;}
        a++;




}
printf("2");
for(m=3;m<=x;m++){if (flag[m]==0)printf(" %d",m); }
printf("\n");

   return 0;
}
