#include <stdio.h>
#include <stdlib.h>

int main()
{int x[4000][4];
    int n,i,k,a,b,c,d;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        for(k=0; k<4; k++)scanf("%d",&x[i][k]);
    i=0;
    for(a=0; a<n; a++)
        for(b=0; b<n; b++)
            for(c=0; c<n; c++)
                for(d=0; d<n; d++)
                    if(x[a][0]+x[b][1]+x[c][2]+x[d][3]==0)i++;
    printf("%d",i);
    return 0;
}
