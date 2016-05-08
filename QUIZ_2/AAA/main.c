#include <stdio.h>
#include <stdlib.h>
#define N 100
void mul(int *p,int a)
{
    int c=0,t,i;
    for(i=0;i<N;i++)
    {
        t=p[i]*a+c;
        p[i]=t%10;
        c=t/10;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("case #%d:\n",i);
        int a;
        scanf("%d",&a);
        int s[5];
        s[0]=a%10;a/=10;
        s[1]=a%10;a/=10;
        s[2]=a%10;a/=10;
        s[3]=a%10;a/=10;
        s[4]=a%10;
        a=s[0]*100+s[1]*10+s[2]*1000+s[3]+s[4]*10000;
        int p[N]={1};
      //  printf("%d",a);
        mul(p,a);mul(p,a);mul(p,a);mul(p,a);mul(p,a);
        int x;
        for(x=4;x>=0;x--)
        printf("%d",p[x]);
        printf("\n");
    }
    return 0;
}
