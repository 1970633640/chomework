#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[11][1002],ans[11][1002];
    int i,j,x;
    scanf("%d\n",&x);
    for(i=0; i<x; i++)gets(s[i]);
    for(i=0; i<x; i++)
    {
        for(j=0; j<strlen(s[i])+2; j++)
        {
            if(s[i][j]>='a' && s[i][j]<='m')
                ans[i][j]=s[i][j]+13;
            else if(s[i][j]>='n' && s[i][j]<='z')
                ans[i][j]=s[i][j]-13;
            else if(s[i][j]>='A' && s[i][j]<='M')
                ans[i][j]=s[i][j]+13;
            else if(s[i][j]>='N' && s[i][j]<='Z')
                ans[i][j]=s[i][j]-13;
            else
                ans[i][j]=s[i][j];
        }
    }
    for(i=0; i<x; i++)printf("case #%d:\n%s\n",i,ans[i]);
    return 0;
}
