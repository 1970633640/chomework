#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
��������ΪС�������������
��1�������ĸ������2��5����κ�����������ô��������ؿɻ�Ϊ����С��������С�����ֵ�λ�����ڷ�ĸ��������2��5�и����϶���Ǹ����ĸ�����
��2�������ĸ��ֻ����2��5���������������ô��������ؿɻ�Ϊ��ѭ��С����
��3�������ĸ�мȺ���������2��5���ֺ���2��5���������������ô�������һ���ܻ��ɻ�ѭ��С�������Ҳ�ѭ�����ֵ�λ�����ڷ�ĸ��������2��5�и����϶���Ǹ����ĸ�����

ѭ���ڵĳ�����ʹ��ĸP����10^k-1����Сkֵ��
���磺9��������10^1-1,���Ե���ĸΪ9ʱ��ѭ������1λ��
7��������10^6-1=999999,���Ե���ĸΪ7ʱ��ѭ������6λ��
*/
int max(int a,int b)
{
    return a>b?a:b;
}
int gcd(int a,int b)//���Լ��
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
       if(a==1)flag=0;//����С��
       if(a==1){printf("%.*lf\n",max(er,wu),(double)m/(double)n);continue;}
       if(a!=1 && er==0 && wu==0)flag=1;//��ѭ��С��
       if(a!=1 && (er!=0 || wu!=0) )flag=-1;//��ѭ��С��
       int k; //ѭ��λ��
       a=n;
       a=a/(  (long long int)(pow(2,er)+0.5)  );
        a=a/(  (long long int)(pow(5,wu)+0.5)  );
       for(k=1;k<100;k++)
       {
           if(  ((long long int)(pow(10.0,k)+0.5 )-1  )%a==0)break;
       }
       int x;//ѭ����ǰ���λ��
       x=max(er,wu);

if(flag==1){printf("%.*lf\n",k,(double)m/(double)n-5.0*pow(10,-k-1));printf("%d-%d\n",1,1+k-1);continue;}
if(flag==-1){printf("%.*lf\n",x+k,(double)m/(double)n-5.0*pow(10,-k-1-x) );printf("%d-%d\n",x+1,x+k);continue;  }

    }

    return 0;
}
