#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
long int x;
double d;
    scanf("%ld %d",&x,&b);
    c=0;d=(float)x;
    while(d>=0.99999999){
    d=(float)d/10;
    c++;
    }
    printf("%d ",c);
    a=b%c;
   //  printf("%d\n",a);
x=(x-x%(int)pow(10,a))/pow(10,a)+pow(10,c-a)*(x%(long int)pow(10,a))      ;


    printf("%ld\n",x);
    return 0;
}
