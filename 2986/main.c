#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        printf("case #%d:\n%I64d\n",i,(long long int)(  pow(2.0,(double)a)   )   );
    }
    return 0;
}
