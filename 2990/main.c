#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char g[10];
    int n,nn[10],i,j,k;
    char str[10][200][200];
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d\n",&nn[i]);
        for(j=0; j<nn[i]; j++)
        {
            gets(str[i][j]);
        }
        qsort(str[i],nn[i],sizeof(str[i][0]),stricmp);
    }
    for(i=0; i<n; i++)
    {
        printf("case #%d:\n",i);
        for(j=0; j<nn[i]; j++)
            printf("%s\n",str[i][j]);
    }
    return 0;
}
