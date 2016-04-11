#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void solve() {
    int i,solution=0,num;
    scanf ("%d",&num);
    for(i=2; i<sqrt(2.0*num+1/4)-1/2; i++)
    {if((num-i*(i-1)/2)%i==0) solution++;}
    printf("%d\n",solution);
}
int main()
{  int i,t; scanf("%d",&t);
   for (i=0;i<t;i++)
   { printf("case #%d:\n",i); solve(); }
   return 0;
}
