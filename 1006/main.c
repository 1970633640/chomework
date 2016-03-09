#include <stdio.h>
#include <math.h>
int flag[1000000]={0};
int main()
{
int a,b,x;
int i,j;
flag[1]=1;
	for(i=2;i<=1000000;i++)
		if(!flag[i])
		for(j=i+i;j<=1000000;j+=i)
				flag[j]=1;


while(scanf("%d %d",&a,&b)!=EOF)
{int n=0;
for (x=a;x<=b;x++)if(flag[x]==0)n++;
printf("%d\n",n);
}
return 0;
}
