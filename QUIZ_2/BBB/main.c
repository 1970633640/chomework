#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmp(const void * a,const void * b)
{
    return *(double * )a < *(double * )b ? 1 : -1;
}
int main()
{
  int n,i,k,c;
  double x[50],r[50],sum;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {printf("case #%d:\n",i);
      scanf("%d",&c);sum=0;
      for(k=0;k<c;k++)
      {

       scanf("%lf",&x[k]);sum+=exp(x[k]);}
qsort(x,c,sizeof(x[0]),cmp);
        for(k=0;k<c;k++) r[k]=exp(x[k])/sum;
         for(k=0;k<c;k++)if(r[k]>0.5/(double)c)printf("%.2f\n",x[k]);

  }
    return 0;
}
