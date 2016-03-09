#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int n;
n=0;
   double x;
   x=1.5;
while (fabs(2*x*x*x-4*x*x+3*x-6)>=1e-15)
{n=n+1;
    x=x-(2*x*x*x-4*x*x+3*x-6)/(6*x*x-8*x+3);
}
printf("%3.2f %d\n",x,n);
   return 0;
}
