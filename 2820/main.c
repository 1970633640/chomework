#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{int i,c=0,m=0;
    char s[51];
   gets(s);
   if (strcmp(s,"")==0){printf("0\n");return 0;}
 for(i=0;i<strlen(s)-1;i++)
 {
     if(s[i+1]!=s[i])c++;
     else {c++;if(c>m)m=c;c=0;}
 }
{c++;if(c>m)m=c;c=0;}


    printf("%d",m);
    return 0;
}
