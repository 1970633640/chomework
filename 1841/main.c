#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,temp;
    scanf("%d",&x);
    int a[x],i,j;
    for (i=1;i<=x;i++)scanf("%d",&a[i-1]);
    for (i=1;i<=x;i++){
        for(j=0;j<x-1;j++){
            if(a[j]>a[j+1]){temp=a[j+1];a[j+1]=a[j];a[j]=temp;}

        }

    }
    for (i=0;i<x;i++)printf("%d\n",a[i]);


    return 0;
}
