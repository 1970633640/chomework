#include <stdio.h>
#include <stdlib.h>
double gth(int x){
double ANS;
ANS=1;
for(x;x>0;x--)ANS=ANS*x;
return ANS;
}


int main()
{int m,n,i,x;
double a;
long int b;
scanf("%d",&x);
double ANS[x];
for (i=1;i<=x;i++){
   scanf("%d %d",&m,&n);
   ANS[i-1]=gth(m)/(gth(n)*gth(m-n));
}
for (i=1;i<=x;i++){
   printf("case #%d:\n",i-1);
   printf("%0.0lf\n",ANS[i-1]);}

return 0;
}


