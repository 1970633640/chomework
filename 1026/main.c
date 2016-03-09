#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int level;
double height,time;
    while(scanf("%d",&level)!=EOF){
        if (level==0) return 0;
    if (level==1)height=1.75;
    if (level==2)height=6.75;
    //if (level==3)height=11.75;
    if(level>=3)height=11.75+(level-3)*3;
    time=sqrt(2*height/9.8);
    printf("%0.3f\n",time);
}
return 0;
}

