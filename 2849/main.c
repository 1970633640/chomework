#include <stdio.h>
#include <stdlib.h>
typedef struct
{
long long int ID;
int score;
}xx;
int cmp( const void *a , const void *b )
{
    if (  (*(xx *)a).score!= (*(xx *)b).score  )
return   (*(xx *)b).score-(*(xx *)a).score ;
else
    if ((*(xx *)a).ID- (*(xx *)b).ID>0)return 1;
    else return -1;
}
int main()
{int n,i;
scanf("%d",&n);
xx x[200];
for(i=0;i<n;i++)
scanf("%I64d%d",&x[i].ID,&x[i].score);
qsort(x,n,sizeof(x[0]),cmp);
for(i=0;i<n;i++)
if(x[i].score>=60)printf("%I64d %d\n",x[i].ID, x[i].score);
return 0;
}
