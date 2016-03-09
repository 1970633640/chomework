#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*/////////////////////////////////////////////////////*/

int count(char *s, char *t)
{
    //TODO: your definition
    char cc[100],c[100];
    int xx=0,p=0;
    if(strlen(s)<strlen(t))return 0;
    if(strlen(s)==strlen(t) && strcmp(s,t)==0)return 1;
    if(strlen(s)==strlen(t) && strcmp(s,t)!=0)return 0;
    strncpy(cc,s,strlen(t)+1);
    strncpy(c,cc,strlen(t));
    cc[strlen(t)+1]='\0';c[strlen(t)]='\0';
   //printf("|%d|  |%d|\n",strlen(s),strlen(t));
    //printf("|%s|    |%s|",c,cc);
    if (strcmp(c,t)==0 && (cc[strlen(t)]==' ' ||cc[strlen(t)]=='\n' )) xx++;
    for(p=0; p<(strlen(s)-strlen(t)-1); p++)
    {
    //    printf("->%d<-%d\n",p,strlen(s)-strlen(t)-2);
        strncpy(cc,s+p,strlen(t)+2);
        strncpy(c,cc+1,strlen(t));
        cc[strlen(t)+2+p]='\0';c[strlen(t)]='\0';
        if (strcmp(c,t)==0 && cc[0] ==' ' && cc[strlen(t)+1]==' ') xx++;
    }
    p=strlen(s)-strlen(t)-1;
  //  printf("\n\n->%d<-\n",p);
    strncpy(cc,s+p,strlen(t)+1);
    strncpy(c,cc+1,strlen(t));
    cc[strlen(t)+1+p]='\0';c[strlen(t)]='\0';
    if (strcmp(c,t)==0 && cc[0] ==' ' ) xx++;

    return xx;
}

/*/////////////////////////////////////////////////////*/
//********** Specification of count **********


void solve()
{
    char s[81],t[11];
    gets(s);
    gets(t);

    //********** count is called here **********
    printf("%d\n",count(s,t));
    //anss[i]=count(s,t);
    //****************************************
}

int main()
{
    int i=0,t=0;
    char tempp[10];
    //scanf("%d\n",&t);
    gets(tempp);
    t=atoi(tempp);
    for (i=0; i<t; i++)
    {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}
