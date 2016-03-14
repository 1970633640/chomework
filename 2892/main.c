#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data
{
    char date[18];
    char date2[18];
int big;
    char name[130];
}dat;
int cmp1( const void *a , const void *b )
{
   if( (*(dat *)a).big>(*(dat *)b).big )
    return 1;
   else if(   (*(dat *)a).big<(*(dat *)b).big  ) return -1;
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
        else if (strcmp(  (*(dat *)a).date2 ,  (*(dat *)b).date2 )!=0)
            return  strcmp(  (*(dat *)a).date2 ,  (*(dat *)b).date2 );
        else return strcmp((*(dat *)a).name,(*(dat *)b).name);
}


int main()
{char way[50];
    int c,n[101],i,j;
dat x[101][105];
    c=0;
    while(scanf("%d",&n[c])!=EOF && n[c]!=0)
    {getchar();
        for(i=0;i<n[c];i++){

            scanf("%s %s %d %s",x[c][i].date,x[c][i].date2, &x[c][i].big ,x[c][i].name);
           }
      getchar();
gets(way);
//printf("---%s--",way);
if (strcmp(way,"LIST /SIZE")==0) qsort(x[c],n[c],sizeof(x[c][0]),cmp1);
if (strcmp(way,"LIST /NAME")==0) qsort(x[c],n[c],sizeof(x[c][0]),cmp2);
if (strcmp(way,"LIST /TIME")==0) qsort(x[c],n[c],sizeof(x[c][0]),cmp3);
c++;
}
for(i=0;i<c-1;i++){
for(j=0;j<n[i];j++){printf("%s %s %16d %s\n",x[i][j].date,x[i][j].date2 , x[i][j].big, x[i][j].name );
}

 printf("\n");}
 for(j=0;j<n[i];j++){printf("%s %s %16d %s\n",x[i][j].date,x[i][j].date2 , x[i][j].big, x[i][j].name );
}
    return 0;
}

