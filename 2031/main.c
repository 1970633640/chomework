#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmp ( const void *a, const void *b )
{
    return abs(*(int *)a) - abs(*(int *)b);
}
int main()
{
    int i,n,x[100];
    while (scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)scanf("%d",&x[i]);
        qsort(x,n,sizeof(x[0]),cmp);
        for(i=0; i<n-1; i++)printf("%d ",x[i]);
        printf("%d\n",x[i]);
    }
    return 0;
}
