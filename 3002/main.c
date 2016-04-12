#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,k,p;
     scanf("%d",&n);
   int d[n];
d[0]=0;
   i=1;
   while (i<=n)
   {
       scanf("%d",&d[i]);
       i=i+1;
   }

k=1;
   while(k<=n){
long long int a[d[k]+10];
   a[0]=0;a[1]=1;a[2]=1;
   p=3;
           while(p<=d[k]){
  a[p]=a[p-3]+a[p-2]+a[p-1];
p=p+1;
       }
       printf("case #%d:\n%I64d\n",k-1,a[d[k]]);
       k=k+1;
   }

    return 0;
}
