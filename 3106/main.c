/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>

//********** Specification of probability **********
double probability(int n,int m)
/* PreCondition:
     n,m are two integers, 1<n<=6, 1<m<=n
   PostCondition:
     return the probability according to problem description
*/

{ //TODO: your function definition
srand((unsigned)time(NULL));
int i,j,k;int YES=0;
for(j=1;j<100001;j++){
        int sz[7]={0};int flag=0;
for(i=1;i<=n;i++){
    sz[(rand()%6)+1]++;

    }

for(i=1;i<7;i++)if(sz[i]>=m)flag=1;
if(flag==1)YES++;
 //   for(k=1;k<7;k++) printf("%d",sz[k]);printf("%d",flag);printf("-");
}
return ((double)YES)/100000.0;
}
/***************************************************************/
int main()
{   int n,m;
    scanf("%d%d",&n,&m);
//********** probability is called here ************
    printf("%.2f\n",probability(n,m));
//**************************************************
    return 0;
}
