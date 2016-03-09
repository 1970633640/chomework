#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
long int d,p,r;

    scanf("%ld %ld %ld",&d,&p,&r);
int m=(int)(((float)log10((float)p/(p-d*(float)r/100))/log10(1+(float)r/100))+0.5);



 printf("%d\n",m);
    return 0;
}
