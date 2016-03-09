#include <stdio.h>
#include <stdlib.h>
int cmp (const void *a , const void *b)
{
    if (*(int *)a % 10 != *(int *)b % 10)
    return *(int *)a % 10 - *(int *)b % 10;
    else
    return *(int *)a-*(int *)b;
}
int main()
{
    int i,j,n,nn[10],x[10][100];
    scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&nn[i]);
    for(j=0;j<nn[i];j++)scanf("%d",&x[i][j]);
qsort(x[i],nn[i],sizeof(x[i][0]),cmp);}
for(i=0;i<n;i++){
printf("case #%d:\n",i);
printf("%d",x[i][0]);
    for(j=1;j<nn[i];j++)
        if(x[i][j]!=x[i][j-1])printf(" %d",x[i][j]);
printf("\n");
}
return 0;}
