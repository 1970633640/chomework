#include <stdio.h>
#include <stdlib.h>
int flag[41253];
int main()
{
int t,j,n,p,e,i,d,ans[10];
scanf("%d",&n);
for(j=0;j<n;j++)
{
    scanf("%d%d%d%d",&p,&e,&i,&d);
    for(t=0;t<41253;t++)flag[t]=0;
     for(t=p;t>0;t-=23)flag[t]++;
     for(t=p+23;t<41253;t+=23)flag[t]++;

     for(t=e;t>0;t-=28)flag[t]++;
     for(t=e+28;t<41253;t+=28)flag[t]++;

     for(t=i;t>0;t-=33)flag[t]++;
     for(t=i+33;t<41253;t+=33)flag[t]++;

      for(t=d+1;t<41253;t++)if(flag[t]==3){ans[j]=t-d;break;}



}
for(j=0;j<n;j++)printf("case #%d:\nthe next triple peak occurs in %d days.\n",j,ans[j]);

    return 0;
}
