#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[500],s2[500];
    int l1,l2;
    while(scanf("%s%s",s1,s2)!=EOF){

            l1=strlen(s1)+1;l2=strlen(s2)+1;
        int x1[503]={0},x2[503]={0},x3[503]={0};
        int i;
        i=l1;
        while(i>0){x1[502-l1+i]=s1[i-1]-'0';i--;}
                i=l2;
        while(i>0){x2[502-l2+i]=s2[i-1]-'0';i--;}
for(i=502;i>0;i--){x3[i]=x3[i]+x1[i]+x2[i];if(x3[i]>9){x3[i]=x3[i]-10;x3[i-1]=1;}}
int flag=0;
int flagg=0;
for(i=0;i<503;i++){
    if ((x3[i]>0) && (x3[i]<10)){flag=1;flagg=1;}
   if(x3[i]<0)flag=0;
    if(flag==1)printf("%d",x3[i]);
}
if(flagg==0)printf("0");
printf("\n");
}
return 0;
}
