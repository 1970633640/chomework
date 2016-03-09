#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d",&x);
    char s[10][31];
    char t[31];
    int i;
    for(i=0;i<=x;i++)gets(s[i]);
    int j,k;
    for(j=0;j<=x;j++){
        for(k=0;k<=x-1;k++){
            if (strcmp(s[k],s[k+1])>0){strcpy(t, s[k]);strcpy(s[k], s[k+1]);strcpy(s[k+1], t);}

//for(i=0;i<=x;i++)printf("%s\n",s[n[i]]);
//printf("\n\n");
        }



    }
for(i=x;i>=0;i--)printf("%s\n",s[i]);

return 0;
}
