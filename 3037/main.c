#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int zhuanhuan(char x)
{
    return x>='A'?(int)(x-'A'+10):(int)(x-'0');
}
int main()
{
    char a[10][205]= {'\0'},b[10][205]= {'\0'};
    int aa[10][205]= {0},bb[10][205]= {0},cc[10][205]= {0};
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s %s",a[i],b[i]);
        for(k=0; k<strlen(a[i]); k++)aa[i][204-k]=zhuanhuan(a[i][strlen(a[i])-1-k]);
        for(k=0; k<strlen(b[i]); k++)bb[i][204-k]=zhuanhuan(b[i][strlen(b[i])-1-k]);
        for(k=204; k>0; k--)
        {
            cc[i][k]=cc[i][k]+aa[i][k]+bb[i][k];
            if(cc[i][k]>15)
            {
                cc[i][k]=cc[i][k]-16;
                cc[i][k-1]=1;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("case #%d:\n",i);
        int flag=0;
        for(k=0; k<=204; k++)
        {
            if(cc[i][k]!=0)flag=1;
            if(flag==1 && cc[i][k]<10)printf("%d",cc[i][k]);
            if(flag==1 && cc[i][k]>9)printf("%c",cc[i][k]-10+'A');
        }
        if(flag==0)printf("0");
        printf("\n");
    }
    return 0;
}
