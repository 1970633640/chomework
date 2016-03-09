#include <stdio.h>
#include <stdlib.h>

int main()

    {


    int ANS;
    double k1,k2,x,y,a,b,c,d,e,f,g,h;
scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
if((((a-c)*(f-h)==(b-d)*(e-g)) && ((a-e)*(f-d)-(e-c)*(b-f)!=0)))
    ANS=0;
else
{


    ANS=0;
    k1=(b-d)/(a-c);
    k2=(f-h)/(e-g);
x= (k1*a-k2*e+f-b)/(k1-k2);
y= b+(x-a)*k1;
    if(((x-a)*(x-c)<=0) && ((x-e)*(x-g)<=0) && ((y-b)*(y-d)<=0) &&((y-f)*(y-h)<=0))ANS=1;
}
if((((a-c)*(f-h)==(b-d)*(e-g)) && ((a-e)*(f-d)==(e-c)*(b-f))))ANS=1;
if(ANS==0)printf("No\n");
if(ANS==1)printf("Yes\n");
return 0;
}

