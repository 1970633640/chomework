#include <stdio.h>

void Kaprekar(int n)
{

#include <math.h>
int x,data[100],flag=1;
for(x=0;x<100;x++){
int a=0,b=0,num[5],temp;
int i,j;
for(i=0;i<5;i++){
num[i]=n%10;
n=n/10;
}
for(i=0;i<5;i++){for(j=0;j<4;j++)if(num[j]<num[j+1]){temp=num[j];num[j]=num[j+1];num[j+1]=temp;} }

for(i=0;i<5;i++){b=b+num[i]*(int)(pow(10,i)+0.5);a=a+num[4-i]*(int)(pow(10,i)+0.5);}
n=a-b;
data[x]=n;
printf("%d-%d=%d\n",a,b,n);
for(i=0;i<x;i++)if(data[i]==n)flag=0;if(flag==0)break;
}}
int main()
{
int n;
scanf("%d",&n);

 Kaprekar(n);
return 0;
}
