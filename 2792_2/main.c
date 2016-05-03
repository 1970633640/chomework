#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int a,int b)
{
    if (a<b) return gcd(b,a);
    else if (b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int i,n,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("case #%d:\n",i);
        int m,n;
        scanf("%d%d",&m,&n);
        temp=gcd(m,n);
        m=m/temp;
        n=n/temp;
        int record[1000]= {0},k=0,mod,key,temp,flag=1;
        mod=0;
        printf("0.");
        while(10*m<n)
        {
             record[k]=m;
            m=m*10;
            printf("0");

            k++;

        }
        for(; k<=999; k++)
        {
            record[k]=m;
            for(temp=0; temp<k; temp++)if(m==record[temp])
                {
                    flag=0;
                    break;
                }
            m=m*10;
            if(flag==0)break;
            key=m/n;
            printf("%d",key);
            m=m-key*n;
            if(m==0)break;
        }
        printf("\n");
        if(flag==1)continue;
        printf("%d-%d\n",temp+1,k);
    }
    return 0;
}
