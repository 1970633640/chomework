#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,d;
    scanf("%d %d",&a,&b);
c=min(a,b);
for(i=1;i<=c;i++){
    if (a%i==0 && b%i==0)d=i;

}

printf("%d",d);
}
int min(a,b){
if (a>=b)return b;
if (a<b)return a;
}
