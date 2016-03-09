#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,i,n,x[10],ans1[10],ans2[10];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++)
    {
        ans1[i]=x[i];
        ans2[i]=0;
        while(x[i]!=1)
        {
            if(x[i]%2==0)x[i]/=2;
            else x[i]=x[i]*3+1;
            ans2[i]++;
            if(x[i]>ans1[i])ans1[i]=x[i];
        }
    }
    for(i=0; i<n; i++)printf("case #%d:\n%d %d\n",i,ans1[i],ans2[i]);

}
