#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,temp,i,j,k,a[100][35]= {0},b[100][35]= {0},aa,bb,ans[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&aa,&bb);
        k=0;
        while (aa)
        {
            a[i][34-k]=aa%2;
            aa=aa/2;
            k++;
        }
        k=0;
        while (bb)
        {
            b[i][34-k]=bb%2;
            bb=bb/2;
            k++;
        }
        temp=0;
        for(k=0; k<35; k++)if(a[i][k]!=b[i][k])temp++;
        ans[i]=temp;
    }
    for(i=0; i<n; i++)printf("%d\n",ans[i]);
    return 0;
}
