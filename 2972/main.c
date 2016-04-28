#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
最简分数化为小数的三种情况：
（1）如果分母不含除2，5外的任何质因数，那么这个分数必可化为有限小数，并且小数部分的位数等于分母中质因数2与5中个数较多的那个数的个数；
（2）如果分母中只含有2与5以外的质因数，那么这个分数必可化为纯循环小数；
（3）如果分母中既含有质因数2或5，又含有2与5以外的质因数，那么这个分数一定能化成混循环小数，并且不循环部分的位数等于分母中质因数2与5中个数较多的那个数的个数。

循环节的长度是使分母P整除10^k-1的最小k值。
例如：9可以整除10^1-1,所以当分母为9时，循环节是1位。
7可以整除10^6-1=999999,所以当分母为7时，循环节是6位。
*/
int max(int a,int b)
{
    return a>b?a:b;
}
int gcd(int a,int b)//最大公约数
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
       int er=0,wu=0;
       int flag,a=n;
       while(a%2==0)
       {
           a=a/2;
           er++;
       }
       while(a%5==0)
       {
           a=a/5;
           wu++;
       }
       if(a==1)flag=0;//有限小数
       if(a==1){printf("%.*lf\n",max(er,wu),(double)m/(double)n);continue;}
       if(a!=1 && er==0 && wu==0)flag=1;//纯循环小数
       if(a!=1 && (er!=0 || wu!=0) )flag=-1;//混循环小数
       int k; //循环位数
       a=n;
       a=a/(  (long long int)(pow(2,er)+0.5)  );
        a=a/(  (long long int)(pow(5,wu)+0.5)  );
       for(k=1;k<100;k++)
       {
           if(  ((long long int)(pow(10.0,k)+0.5 )-1  )%a==0)break;
       }
       int x;//循环节前面的位数
       x=max(er,wu);

if(flag==1){printf("%.*lf\n",k,(double)m/(double)n-5.0*pow(10,-k-1));printf("%d-%d\n",1,1+k-1);continue;}
if(flag==-1){printf("%.*lf\n",x+k,(double)m/(double)n-5.0*pow(10,-k-1-x) );printf("%d-%d\n",x+1,x+k);continue;  }

    }

    return 0;
}
