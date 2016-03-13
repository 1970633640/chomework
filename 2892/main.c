#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data
{
    char date[12];
    long long int big;
    char name[64];
}dat;
int cmp1( const void *a , const void *b )
{
   if( (*(dat *)a).big>(*(dat *)b).big )
    return 1;
   else if(   (*(dat *)a).big<(*(dat *)b).big  ) -1;
   else  return strcmp((*(dat *)a).name,(*(dat *)b).name);
}
int cmp2( const void *a , const void *b )
{
    return strcmp((*(dat *)a).name,(*(dat *)b).name);
}
int cmp3( const void *a , const void *b )
{
    if (strcmp(  (*(dat *)a).date ,  (*(dat *)b).date )!=0)
        return  strcmp(  (*(dat *)a).date ,  (*(dat *)b).date );
        else return strcmp((*(dat *)a).name,(*(dat *)b).name);
}


int main()
{char way[101];
    int c,n[101],i,j,k;
dat x[101][105];
    c=0;
    while(1)
    {
        scanf("%d",&n[c]);
        printf("----%d----\n",n[c]);
        if(n[c]==0)break;
        for(i=0;i<n[c];i++){
            scanf("%s%I64d%s\n",x[c][i].date, &x[c][i].big ,x[c][i].name);
           }
scanf("LIST /%s",way);
//printf("---%s--",way);
if (strcmp(way,"SIZE")==0) qsort(x[c],n[c],sizeof(x[c][0]),cmp1);
if (strcmp(way,"NAME")==0) qsort(x[c],n[c],sizeof(x[c][0]),cmp2);
if (strcmp(way,"TIME")==0) qsort(x[c],n[c],sizeof(x[c][0]),cmp3);
c++;
}
for(i=0;i<c-1;i++){
for(j=0;j<n[i];j++){printf("%s %16I64d %s\n",x[i][j].date , x[i][j].big, x[i][j].name );
}

 printf("\n");}
 for(j=0;j<n[i];j++){printf("%s %16I64d %s\n",x[i][j].date, x[i][j].big, x[i][j].name );
}
    return 0;
}
