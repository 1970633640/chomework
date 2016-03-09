#include <stdio.h>
#include <stdlib.h>
int cmp1(const void *a,const void *b)
{return *(int *)a - *(int *)b;}
int cmp2(const void *a,const void *b)
{return *(int *)b - *(int *)a;}

int main()
{char way,str[100000],a[1000][5],c;
    int x[100],total,y[100];
    scanf("%c\n",&way);

int count=0,i=0,j=0,t;
 while(1)
 {
 scanf("%d",&t);
    x[count]=t;
//printf("\n%d\n",t);
    count++;
    c=getchar();
   if(c=='\n') break;
}
//printf("dswqd");
total=0;int flag;
for(i=0;i<count;i++)
{   flag=1;
   for(j=0;j<total;j++)if(x[i]==y[j]){flag=0;break;}
    if (flag==1){y[total]=x[i];total++;}
}
if (way=='A')qsort(y,total,sizeof(y[0]),cmp1);
if (way=='D')qsort(y,total,sizeof(y[0]),cmp2);
for(j=0;j<total-1;j++)printf("%d ",y[j]);printf("%d",y[j]);
return 0;
}
