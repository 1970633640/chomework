#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
char change(int n)
{
    if(n>=0 && n<=25)return 'A'+n;
    else if(n>25 && n<=51)return 'a'+n-26;
        else if (n>51 && n<=61)return '0'+n-52;
    else if(n==62)return '+';
    else if(n==63)return '/';
    else if(n==-1)return '=';
}
int main()
{
   char x[1000]={'\0'};char s[105];
   int temp,k,n,i;scanf("%d",&n);gets(s);
   for(i=0;i<n;i++)
   {
       printf("case #%d:\n",i);
gets(s);int len=strlen(s);
for(k=0;k<len;k++)
{
    int t[8]={0};
    for(temp=7;temp>=0;temp--){t[temp]=s[k]%2;s[k]/=2;}
for(temp=0;temp<8;temp++)x[k*8+temp]='0'+t[temp];
}
int len2=(len+2)/3*3*8;
for(k=len*8;k<len2;k++)x[k]='3';
//for(k=0;k<len2;k++)printf("%c\n",x[k]);
char ans[100]={'\0'};int ansc=0;
//printf("%d\n",len2);
for(k=0;k<len2/6;k++)
{
    if(x[k*6]=='3'){ans[ansc]='=';ansc++;continue;}
    else
        {for(temp=0;temp<6;temp++)if(x[k*6+temp]=='3')x[k*6+temp]='0';
        int temp2=0;
        for(temp=0;temp<6;temp++)
        temp2+=(x[k*6+temp]-'0')*(int)(pow(2,5-temp)+0.5);

    ans[ansc]=change(temp2);ansc++;continue;
        }
}
printf("%s\n",ans);
   }
    return 0;
}
