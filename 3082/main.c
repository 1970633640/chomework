#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
   scanf("%d",&a);
   if (a<1)b=a;
       if ((a>=1) && (a<10))b=2*a-1;
       if (a>=10)b=3*a-11;
    printf("%d\n",b);
    return 0;
}

