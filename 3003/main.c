#include <stdio.h>
#include <stdlib.h>
int cmp1 ( const void *a, const void *b )
{
    return *(int *)a - *(int *)b;
}
int cmp2 ( const void *a, const void *b )
{
    return *(int *)b - *(int *)a;
}
int main()
{
int i,j,k,n,d,a[30][1000],b[30][1000];
long long int ans[30]= {0};
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&d);
        for(k=0; k<d; k++)scanf("%d",&a[i][k]);
        for(k=0; k<d; k++)scanf("%d",&b[i][k]);
        qsort(a[i],d,sizeof(a[i][0]),cmp1);
        qsort(b[i],d,sizeof(b[i][0]),cmp2);
        for(k=0; k<d; k++)ans[i]=ans[i]+a[i][k]*b[i][k];
    }
    for(i=0; i<n; i++)printf("case #%d:\n%I64d\n",i,ans[i]);
    return 0;
}
