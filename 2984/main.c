#include <stdio.h>
#include <stdlib.h>

int main()
{
   int flag,i,n,m,w,a,b;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d %d",&a,&b);
       flag=0;
       printf("case #%d:\n",i);
       for(m=0;m<=a;m++)
        for(w=0;w<=a-m;w++)

       if(3*m+2*w+a-w-m==b){flag=1;printf("%d %d %d\n",m,w,a-w-m);}
       if(flag==0)printf("-1\n");
   }
    return 0;
}
