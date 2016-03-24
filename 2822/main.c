#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{char x[100];double a;int b,i,flag;
while(scanf("%s",x)!=EOF){flag=0;
for(i=0;i<strlen(x);i++)if(x[i]=='.'){flag=1;break;}
if(flag==1){a=atof(x);for(i=0;i<8;i++)printf("%02x ",((unsigned char *)&a)[i]);printf("\n");}
else {b=atoi(x);for(i=0;i<4;i++)printf("%02x ",((unsigned char *)&b)[i]);printf("\n");}
}
return 0;}
