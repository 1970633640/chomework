#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[81],s2[81],s3[81];
    scanf("%s%s",s1,s2);
int i,k;
int flag=0;
for(k=0;k<=strlen(s1);k++){
    for(i=k;i<strlen(s1);i++)s3[i-k]=s1[i];
    for(i=0;i<k;i++)s3[i+strlen(s1)-k]=s1[i];
    s3[strlen(s1)]='\0';

//printf("%s|\n\n",s3);
    if(strcmp(s2,s3)==0){flag=1;}
}
if (flag==1)
        printf("\"%s\" is a rotation of \"%s\"",s1,s2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
    return 0;



}
