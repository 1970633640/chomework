#include <stdio.h>
#include <stdlib.h>
int main()
{int x;
    scanf("%d",&x);
   long int ANS[x];
   long int i;
   for(i=0;i<x;i++){
  long long int a;
    scanf("%I64d",&a);
    ANS[i]=0;
    while (a!=0){ANS[i]=ANS[i]+a%10;a=a/10;}
    while(ANS[i]>=10){
        a=ANS[i];ANS[i]=0;
       while (a!=0){ANS[i]=ANS[i]+a%10;a=a/10;}
    }

   }
    for(i=0;i<x;i++)printf("%d\n",ANS[i]);
return 0;
}
