#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int zf[10];
    int a[10][35]= {0},temp;
    int b[10][35]= {0};
    int x[10],n,i,k,base;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>=0) zf[i]=1;
        else
        {
            zf[i]=-1;
            x[i]=abs(x[i]);
        }
        k=0;
        temp=x[i];
        while (temp)
        {
            a[i][34-k]=temp%2;
            temp=temp/2;
            k++;
        }
        k=0;
        temp=x[i];
        while (temp)
        {
            b[i][34-k]=temp%16;
            temp=temp/16;
            k++;
        }

    }
    int flag=0;
    for(i=0; i<n; i++)
    {
        printf("case #%d:\n",i);
        flag=0;
        if (zf[i]==-1)printf("-");
        for(k=0; k<35; k++)
        {
            if (a[i][k]!=0)flag=1;
            if(flag==1 && a[i][k]<=9)printf("%d",a[i][k]);
            if(flag==1 && a[i][k]>9)printf("%c",'A'+a[i][k]-10);
        }
         if (flag==0)printf("0");
        printf(" ");
        flag=0;
        for(k=0; k<35; k++)
        {
            if (b[i][k]!=0)flag=1;
            if(flag==1 && b[i][k]<=9)printf("%d",b[i][k]);
            if(flag==1 && b[i][k]>9)printf("%c",'A'+b[i][k]-10);
        }
        if (flag==0)printf("0");
        printf("\n");
    }

    return 0;
}
