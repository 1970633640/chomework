#include <stdio.h>
#include <stdlib.h>

int main()
{
   int flag,c[10],cc,n,i,j,k,x[10][30];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&c[i]);
for(j=0;j<c[i];j++)scanf("%d",&x[i][j]);
flag=0;
while(1)
{flag=0;
    for(j=0;j<c[i];j++)
    {
        cc=0;
        for(k=j;k<c[i];k++)if(x[i][k]<x[i][j])cc++;
        if(cc!=x[i][j]){flag=1;x[i][j]=cc;}

    }
    if(flag==0)break;
}

   }
      for(i=0;i<n;i++){printf("case #%d:\n",i);
         for(j=0;j<c[i]-1;j++)printf("%d ",x[i][j]);
         printf("%d",x[i][j]);
            printf("\n");
      }
    return 0;
}
