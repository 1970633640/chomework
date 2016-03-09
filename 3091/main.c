#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,p,k,temp,flag,b,target;
    scanf("%d",&x);
    int a[x];
    p=0;
 do
    {
    scanf("%d",&a[p++]);
    }while(getchar()!='\n');
for(i=0;i<=x;i++){
    for(k=0;k<x-1;k++){
       if(a[k]>a[k+1]){temp=a[k+1];a[k+1]=a[k];a[k]=temp;}}}
    scanf("%d",&target);
flag=0;
for(i=0;i<x;i++){if (a[i]==target){b=i+1;flag=1;}}
if (flag==0)printf("not found\n");
if (flag==1)printf("%d\n",b);

    return 0;
}
