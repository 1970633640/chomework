#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<dos.h>
    int n,c[10],i,j;

    long long int x[10][10000];
int zg(long long int a)
{
    while(a/10)a=a/10;
    return a;
}
long long int cabs(long long int m )
{
    return m>=0?m: -1*(m);
}
int cmp ( const void *a, const void *b )
{
    int x,y;
    x= zg(cabs(*(long long int *)a));
    y= zg(cabs(*(long long int *)b));
    if(x!=y)return y-x;
    else if ( *(long long int *)a > *(long long int *)b)return 1;
    else return -1;
}

int main()
{

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&c[i]);
        for(j=0; j<c[i]; j++)scanf("%I64d",&x[i][j]);
        qsort(x[i],j,sizeof(x[i][0]),cmp);
    }
    for(i=0; i<n; i++)
    {
        printf("case #%d:\n",i);
        for(j=0; j<c[i]-1; j++)printf("%I64d ",x[i][j]);
        printf("%I64d\n",x[i][j]);
    }

    return 0;
}
