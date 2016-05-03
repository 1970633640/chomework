#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int mid(char s[30],int a,int b)
{char ans[30]={'\0'};
strncpy(ans,s+a,b-a+1);
return atoi(ans);

}
int nine(int x)
{char ans[30]={'9'};
ans[x]='\0';
    return atoi(ans);
}
int gcd(int a,int b)
{
    if (a<b) return gcd(b,a);
    else if (b==0) return a;
    else return gcd(b,a%b);
}
int main()
{int a,b,c,lena,lenb,lenc;  //整数  小数 循环
   int n,i,k;
   char s[30];
   scanf("%d",&n);
   gets(s);
   for(i=0;i<n;i++)
   {lenc=0;
       printf("case #%d:\n",i);
       gets(s);
       int flag=0;
       for(k=0;k<strlen(s);k++)
        if(s[k]=='[')flag=1;
      if(flag==1)
       for(k=0;k<strlen(s);k++)
       {
           if(s[k]=='.'){a=mid(s,0,k-1);lena=k;}
           if(s[k]=='['){b=mid(s,lena+1,k-1);lenb=k-lena-1;}
           if(s[k]==']'){c=mid(s,lena+lenb+2,k-1);lenc=k-lena-lenb-2;}
       }
      else
               for(k=0;k<=strlen(s);k++)
       {
           if(s[k]=='.'){a=mid(s,0,k-1);lena=k;}
           if(s[k]=='\0'){b=mid(s,lena+1,k-1);lenb=k-lena-1;break;}
       }
int M,N;   // M/N
if(flag==0){M= b+(long long int)(pow(10,lenb)+0.5)*a;N=(long long int)(pow(10,lenb)+0.5);
    int temp=gcd(M,N);M=M/temp;N=N/temp;
    printf("%d/%d\n",M,N);
continue;
}
if(flag==1){
M=(long long int)(pow(10,lenb)+0.5)*b -c;
N=nine(lenc)*(pow(10,lenb)+0.5);
M=M+a*N;
   int temp=gcd(M,N);M=M/temp;N=N/temp;
    printf("%d/%d\n",M,N);continue;
}


   }
   return 0;
}
