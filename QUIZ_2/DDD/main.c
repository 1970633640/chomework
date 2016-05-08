#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,i,n,k,r,c,xx,yy,x,y,X,Y,R,C,N,K;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int d[10][10]= {0};
        printf("case #%d:\n",i);
        scanf("%d%d%d%d",&R,&C,&N,&K);
        for(c=0; c<N; c++)
        {
            scanf("%d%d",&X,&Y);
            d[X-1][Y-1]=1;
        }
        if(K>N)
        {
            printf("0\n");
            continue;
        }
        if (N==R*C)
        {
            printf("%d\n",R*C*(R+1)*(C+1)/4);
            continue;
        }
        if(N==R*C-1)
        {
            printf("%d\n",R*C*(R+1)*(C+1)/4-1);
            continue;
        }
        int sum=0;

        for(r=1; r<=R; r++)
            for(c=1; c<=C; c++)
            {
                if(r*c<K)continue;
                for(x=0; x<=R-r; x++)
                    for(y=0; y<=C-c; y++)
                    {temp=0;
                        for(xx=x; xx<x+r; xx++)
                        {
                            for(yy=y; yy<y+c; yy++)
                            {
                                if(d[xx][yy]==1)temp++;
                                if(temp>=K)
                                {
                                    sum++;
                                    goto ppp;
                                }
                            }
                        }
ppp:;
                    }
            }


        printf("%d\n",sum);
    }


return 0;
}
