#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,a;

scanf("%d",&x);

a=0;
while(x!=0){
if(x%2==1)a++;
    x=x/2;

}

printf("%d",a);
return 0;
}
