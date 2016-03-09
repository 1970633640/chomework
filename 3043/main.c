#include<stdio.h>
int gcd(a,b)
{int n,c;
n=b;
    c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
return b;
}
int main()
{
    int n,i,a[10],b[10],c[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d %d",&a[i],&b[i]);c[i]=gcd(a[i],b[i]);}

    for(i=0;i<n;i++)printf("case #%d:\n%d\n",i,c[i]);
    return 0;
}
