#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[99999],s2[99999];
    while(scanf("%s%s",s1,s2)!=EOF){
    int ls1,i;

   ls1=strlen(s1);
    int target,success;
    success=0;
    target=0;
    for(i=0;s2[i]!='\0';i++){
        if (s2[i]==s1[target]){success++;target++;}

    }
    if(ls1==success)printf("Yes\n");
      if(ls1!=success)printf("No\n");}
    return 0;
}
