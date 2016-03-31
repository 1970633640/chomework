#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{char x[3001];
int t,tt=0,c[26]={0},m=0,i;
gets(x);
t=strlen(x);
for(i=0;i<t;i++)if(x[i]!=' '){c[x[i]-'a']++;tt=tt+1;}
for(i=0;i<26;i++)if(c[i]>m)m=c[i];
for(i=0;i<26;i++)if(c[i]==m){printf("%c %.2f\n",(char *)(i+'a'),(float)c[i]/(float)tt);break;}
return 0;
}
