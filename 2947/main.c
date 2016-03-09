#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    int  *s1,*s2;
    s1=(int *)a;
    s2=(int *)b;
    while(*s1!=-1&&*s2!=-1&&*s1==*s2) s1++,s2++;
    return *s2-*s1;
}
int main()
{int n,k,j,xx[10],a;
int x[10][1000][51];
scanf("%d",&n);
for(k=0; k<n; k++)
 {    scanf("%d",&xx[k]);
 for(a=0;a<xx[k];a++){j=0;
      while(scanf("%d",&x[k][a][j])&&
           x[k][a][j]!=-1)  j++;}
 }
 for(k=0; k<n; k++)
 qsort(x[k],n,sizeof(x[k][0]),cmp);


 for(k=0; k<n; k++){
        for(a=0;a<xx[k];a++){

            for(j=0; x[k][a][j+1]!=-1; j++)
                   printf("%d ",x[k][a][j]);
            printf("%d\n",x[k][a][j]);
        }
        }
      return 0;
}
