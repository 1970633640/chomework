#include <stdio.h>
#include <stdlib.h>

int main()
{
long int x;
    scanf("%lld",&x);
    int c=0;
    double a;
    a=(float)x;
    while(a>1){
     a=a/10;
     c++;
    }
    printf("%d",c);

}
