#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void solve() {
int i,n,k;
scanf("%d%d",&n,&k);
double res=0,r=1.0*n/2;
for (i=0;i<k;i++)
{ res=res+pow(2*r,2)-3.141592653589793*pow(r,2);
  r=sqrt(2)/2*r;}
printf("%.6lf\n",res);}
int main()
{  int i,t;  scanf("%d",&t);
   for (i=0;i<t;i++)
   { printf("case #%d:\n",i); solve(); }
   return 0;}
