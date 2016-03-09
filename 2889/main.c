#include <stdio.h>
#include <stdlib.h>

int main(){
int x,i,in,j,jn,m;
while(scanf("%d",&x)!=EOF){
int a[x][x];
    for(i=0;i<x;i++){
            for(j=0;j<x;j++)
                a[i][j]=0;
    }

i=x-2;
j=(x-1)/2+1;
m=1;
for(m=1;m<=x*x;m++)
{
if(j-1>=0)
        jn=j-1;
        else
        jn=x-1;
if(i+1<x)
        in=i+1;
        else
          in=0;

//正常
if(a[in][jn]==0)
    {a[in][jn]=m;j=jn;i=in;}
//重了
else
{
        if(i-1>=0)
            i--;
         else
         i=x-1;
                if(i-1>=0)
            i--;
         else
         i=x-1;
      if(j+1<x)
       j++;
      else
        j=0;

m--;
}

}
for(i=0;i<x;i++){
                for(j=0;j<x-1;j++){
                    printf("%d ",a[i][j]);
                }
                printf("%d",a[i][j]);
                printf("\n");
                        }
}

return 0;
}
