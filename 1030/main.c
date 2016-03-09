#include <stdio.h>
#include <stdlib.h>

int main()
{
            int x,a[50];
        a[0]=1;a[1]=1;a[2]=1;
        for(x=3;x<50;x++)a[x]=a[x-1]+a[x-3];
    while(1==1){
scanf("%d",&x);
        if(x==0)return 0;
        printf("%d\n",a[x-1]);
}
    return 0;
}
