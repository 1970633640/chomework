#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[1000000],w[10],t[10];
    int n,i,j,ans[10],temp;
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        ans[i]=-1;
        gets(w);
        gets(x);
        strlwr(w);strlwr(x);
        strncpy(t,x,strlen(w));
        if (strcmp(t,w)==0 && (    x[strlen(w)]=='.' || x[strlen(w)]==' '  || x[strlen(w)]=='\0'     ))
        {
            ans[i]=0;
            continue;
        }

          temp=strstr(x,w);
            if (temp>0 &&  (   (x[strlen(w)+temp]==' ')   ||(x[strlen(w)+temp]=='\0')||  (x[strlen(w)+temp]=='.')    ) && (x[temp-1]==' ')  )
            {
                ans[i]=temp;
            }

    }
    for(i=0; i<n; i++)
        {if(ans[i]!=-1)
            printf("case #%d:\n%d\n",i,ans[i]+1);
        else
            printf("case #%d:\nNone\n",i);}
    return 0;
}
