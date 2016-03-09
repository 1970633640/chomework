#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[82];
    scanf("%s",s);
    int i=0;
    for(i=0;i<8;i++){
            if(s[i]=='\0')break;
        if (s[i]>'Z')s[i]=s[i]-32;
if (s[i]>='A' && s[i]<='C')printf("2");
if (s[i]>='D' && s[i]<='F')printf("3");
if (s[i]>='G' && s[i]<='I')printf("4");
if (s[i]>='J' && s[i]<='L')printf("5");
if (s[i]>='M' && s[i]<='O')printf("6");
if (s[i]>='P' && s[i]<='S')printf("7");
if (s[i]>='T' && s[i]<='V')printf("8");
if (s[i]>='W' && s[i]<='Z')printf("9");




    }
    printf("\n");

    return 0;
}
