#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b<2*a || b>4*a || (b-2*a)%2!=0  ){printf("case #%d:\nImpossible\n",i);continue;}
        printf("case #%d:\n%d %d\n",i,a-(b-2*a)/2,(b-2*a)/2);
    }
    return 0;
}
