#include <stdio.h>
#include <stdlib.h>
long long int c(m,n)
{long long int isum=1;
int k;
 for(k=1;k<=n;k++)
{
isum=(isum*(m-n+k))/k;
}
return isum;
}

int main()
{int x[30],i,k,j,count=0;
while(1){
scanf("%d",&x[count]);
if (x[count]==0)break;
count++;

}
for(i=0;i<count;i++)
{
    for(k=0;k<x[i];k++){
    for(j=0;j<k;j++)printf("%I64d ",c(k,k-j));
printf("1\n");
    }
    printf("\n");
}
return 0;
}
