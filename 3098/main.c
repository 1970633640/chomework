#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[81],s2[81];
    scanf("%s%s",s1,s2);
    int l1,l2,i;
    l1=strlen(s1);l2=strlen(s2);
    for(i=0;i<82;i++){
        if(i>=l1 && i>=l2)break;
    if(i<l1)printf("%c",s1[i]);
       if(i<l2)printf("%c",s2[i]);
    }
    return 0;
}
