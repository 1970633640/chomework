#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[102],word[20][20]= {'\0'}, ans[100];
    int i,j,k,c;
    while(gets(x)!=NULL)
    {
        j=0;
        k=0;
        for(i=0; x[i]!='\0'; i++)
        {
            if(x[i]!=' ' && x[i]!='-')
            {
                word[j][k]=x[i];
                k++;
            }
            if(x[i]==' ')
            {
                word[j][k]='\0';
                j++;
                k=0;
            }
            else  if(x[i]=='-')
            {
                word[j][k]='\0';
                j++;
                k=0;
            }
        }
        c=j;
        j=0;
        for(i=0; i<=c; i++)
            if(  strcmp( strlwr(word[i]),"the" )!=0  &&  strcmp( strlwr(word[i]),"of" )!=0 &&  strcmp( strlwr(word[i]),"and" )!=0 &&  strcmp( strlwr(word[i]),"for" )!=0 &&  strcmp( strlwr(word[i]),"a" )!=0  &&  strcmp( strlwr(word[i]),"and" )!=0)
            {
                ans[j]=toupper( word[i][0])  ;
                j++;
            }
        ans[j]='\0';
        printf("%s\n",ans);
    }
    return 0;
}
