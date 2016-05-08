#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,k,temp;
    char s[502],tempc;
    scanf("%d",&n);
    gets(s);
    for(i=0; i<n; i++)
    {
        printf("case #%d:\n",i);
        gets(s);
        temp=1;
        tempc=s[0];
        for(k=1; k<=strlen(s); k++)
        {
            if(s[k]==tempc && temp<255)temp++;
            else if(s[k]==tempc && temp==255){                printf("%d%c",temp,tempc);
                tempc=s[k];
                temp=1;}
            else
            {
                printf("%d%c",temp,tempc);
                tempc=s[k];
                temp=1;
            }

        }printf("\n");
    }

    return 0;
}
