#include <stdio.h>
#include <stdlib.h>

int main()
{
   while(2>1){
    int x;
    scanf("%d",&x);
    if(x==0)return 0;
    printf("%d\n",(int)((float)x*x*x/6.0+5.0*x/6.0+1));

}
}
