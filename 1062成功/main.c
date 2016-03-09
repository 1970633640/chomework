#include <stdio.h>
#include <stdlib.h>
int main()
{
     int ANS;
     double aa,bb,cc,aaa,bbb,ccc;
    int a,b,c,d,e,f,g,h;
while((scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h))!=EOF)
   {
    aa=b-d;bb=c-a;cc=a*d-b*c;aaa=f-h;bbb=g-e;ccc=e*h-f*g;
    if (  ((aaa*a+bbb*b+ccc)*(aaa*c+bbb*d+ccc)<=0) && ((aa*e+bb*f+cc)*(aa*g+bb*h+cc)<=0)){


        if (( (aa*bbb-aaa*bb<0.01) && (ccc*bb-bbb*cc<0.01) )==0)
                 ANS=1;    //不重合在两边
        else{
                     if (  (  ((e-a)*(e-c)>0) && ((g-a)*(g-c)>0) && ((a-e)*(a-g)>0) && ((c-e)*(c-g)>0)  )|| ( ((f-b)*(f-d)>0) && ((h-b)*(h-d)>0) && ((b-f)*(b-h)>0) && ((d-f)*(d-h)>0)    )     )
                     ANS=0;    //  重合无接触
                     else
                     ANS=1;   //重合有接触
                }


    }
        else
    ANS=0;

if(ANS==0)printf("No\n");
if(ANS==1)printf("Yes\n");
   }
return 0;
}

