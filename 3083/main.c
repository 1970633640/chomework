#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
 scanf("%d %d %d %d",&a,&b,&c,&d)   ;
 e=0;
    while(e<5){
           if (b<a){f=a;a=b;b=f;}
           if (c<b){f=b;b=c;c=f;}
           if (d<c){f=c;c=d;d=f;}
      e=e+1;

    }
    printf("%d %d %d %d\n",a,b,c,d);
    return 0;
}
