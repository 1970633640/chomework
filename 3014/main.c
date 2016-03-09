#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(x,y)
{
return (int)((double)(x+y)*(double)(y-x+1)/(double)2+0.5);
}

int ji(int x)
{int i=2,ans=0;
while(i<=(int)  (0.5+ (-1+sqrt(1+(double)8*x))/(double)2) ){
if(sum(1,i)==x){ans++;break;}
if(x%i==0 && sum(x/i-(i-1)/2,x/i+(i-1)/2)==x ){ans++;}
if(x%i!=0 && sum(x/i-i/2+1,x/i+i/2)==x ){ans++;}
i++;
}
return ans;
}

int main()
{int x,n,i,ans[10];
    scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&x);
ans[i]=ji(x);
}
for(i=0;i<n;i++)printf("case #%d: %d\n",i,ans[i]+1);
return 0;
}
