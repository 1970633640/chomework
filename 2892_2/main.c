#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data
{
      int t0,t1,t2,t3,t4;
     int big;
    char name[128];
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
    if ((*(dat *)a).t0!=(*(dat *)b).t0)
        return (*(dat *)a).t0-(*(dat *)b).t0;
    else    if ((*(dat *)a).t1!=(*(dat *)b).t1)
        return (*(dat *)a).t1-(*(dat *)b).t1;
            else    if ((*(dat *)a).t2!=(*(dat *)b).t2)
        return (*(dat *)a).t2-(*(dat *)b).t2;
            else    if ((*(dat *)a).t3!=(*(dat *)b).t3)
        return (*(dat *)a).t3-(*(dat *)b).t3;
            else    if ((*(dat *)a).t4!=(*(dat *)b).t4)
        return (*(dat *)a).t4-(*(dat *)b).t4;
        else return strcmp((*(dat *)a).name,(*(dat *)b).name);
}


int main()
{char way[101];
    int c,n[101],i,j,k;
dat x[101][105];
    c=0;
    while(scanf("%d",&n[c])!=EOF && n[c]!=0)
    {getchar();
        for(i=0;i<n[c];i++){

            scanf("%d-%d-%d %d:%d %d %s",&x[c][i].t0,&x[c][i].t1,&x[c][i].t2,&x[c][i].t3,&x[c][i].t4, &x[c][i].big ,x[c][i].name);
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
for(j=0;j<n[i];j++){printf("%04d-%02d-%02d %02d:%02d %16d %s\n",x[i][j].t0 , x[i][j].t1, x[i][j].t2, x[i][j].t3 , x[i][j].t4 , x[i][j].big, x[i][j].name );
}

 printf("\n");}
 for(j=0;j<n[i];j++){printf("%04d-%02d-%02d %02d:%02d %16d %s\n",x[i][j].t0 , x[i][j].t1, x[i][j].t2, x[i][j].t3 , x[i][j].t4 , x[i][j].big, x[i][j].name );
}
    return 0;
}
