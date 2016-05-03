#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1000
void mul (int *p, int a)
{
    int c=0, t, i;
    for (i=0; i<N; i++)
    {
        t = p[i]*a + c;
        p[i] = t % 10;
        c = t / 10;
    }
}

int main()
{
    int k,n,a,x;
    scanf("%d",&x);
    for(k=0; k<x; k++)
    {
        printf("case #%d:\n",k);
        scanf("%d%d",&a,&n);
        int i,p[N]= {1};
        for (i=0; i<n; i++)
            mul(p,a);
        int flag=0;
        for (i=N-1; i>=0; i--)
        {
            if (p[i])  flag=1;
            if (flag)  printf( "%d", p[i]);
        }
        printf("\n");
    }
    return 0;
}
