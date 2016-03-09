#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int zf[10];
    int a[10][35]= {0};
    int x[10],n,i,k,base;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x[i],&base);
        if(x[i]>=0) zf[i]=1;
        else
        {
            zf[i]=-1;
            x[i]=abs(x[i]);
        }
        k=0;
        while (x[i])
        {
            a[i][34-k]=x[i]%base;
            x[i]=x[i]/base;
            k++;
        }
    }
    int flag=0;
    for(i=0; i<n; i++)
    {
        flag=0;
        if (zf[i]==-1)printf("-");
        for(k=0; k<35; k++)
        {
            if (a[i][k]!=0)flag=1;
            if(flag==1 && a[i][k]<=9)printf("%d",a[i][k]);
            if(flag==1 && a[i][k]>9)printf("%c",'A'+a[i][k]-10);
        }
        printf("\n");
    }

    return 0;
}
