#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int panduan(char s[])
{
    int i;
    for(i=strlen(s)-1; i>0; i--)
    {
        if(s[i]==s[i-1])return i;
    }
    return i;
}
int f(char A[],int k)
{
    int i=k;
    while(i>=0)
    {
        A[i]+=1;
        if(A[i]<='9')	return i;
        A[i] = '0';
        i--;
    }
    return i;
}

int main()
{
    int i,n,k;
    scanf("%d\n",&n);
    for(k=0; k<n; k++)
    {
        printf("case #%d:\n",k);
        char s[103]= {'0'};
        scanf("%s",s+1);
        i=f(s,strlen(s)-1);
        if(panduan(s) ==0 )
        {
            if(s[0]=='0')printf("%s\n",s+1);
            else printf("%s\n",s);
            continue;
        }
while(panduan(s)!=0){
        i=panduan(s);
        while(s[i-1]==s[i] && i>=1)
        {
            i=f(s,i);
        }
}
        for(i=strlen(s)-1; i>0; i--)
            if(s[i]!=s[i-1])break;
        for(i++; i<strlen(s); i+=2)s[i]='1';
        {
            if(s[0]=='0')printf("%s\n",s+1);
            else printf("%s\n",s);
            continue;
        }
    }
    return 0;
}
