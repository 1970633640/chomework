#include <stdio.h>
#include <stdlib.h>
int count[500];
int cmp ( const void *a, const void *b )
{
    if (count[*(int *)a]==count[*(int *)b])return *(int *)a-*(int *)b;
    else return count[*(int *)b]-count[*(int *)a];
}
int main()
{
    int i,j,n,d[10],x[10][2000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&d[i]);
        for(j=0; j<500; j++)count[j]=0;
        for(j=0; j<d[i]; j++)
        {
            scanf("%d",&x[i][j]);
            count[x[i][j]]++;
        }
        qsort(x[i],d[i],sizeof(x[i][0]),cmp);

    }
    for(i=0; i<n; i++)
    {
        printf("case #%d:\n",i);
        for(j=0; j<d[i]-1; j++) printf("%d ",x[i][j]);
        printf("%d\n",x[i][j]);
    }
    return 0;
}
