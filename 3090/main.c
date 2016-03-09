#include <stdio.h>
#include <stdlib.h>
int jc(x)
{
 int temp,ANS;ANS=1;
 for(temp=1;temp<=x;temp++)ANS=ANS*temp;
 return ANS;
}

int main()
{int x,k,j;
scanf("%d",&x);
for(k=0;k<x;k++){
    for(j=0;j<k;j++)printf("%d ",jc(k)/(jc(j)*jc(k-j)));
printf("1\n");

}
return 0;
}
