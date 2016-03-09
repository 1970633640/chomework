/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>

//********** Specification of Transpose **********
void Transpose(int m[], int n)
/* PreCondition:
     m is the address of a matrix and n is a positive integer
   PostCondition:
     m is transposed
*/

{ //TODO: your function definition
 int a[100],i,j;
   for(i=0; i<n; i++)
     for(j=0; j<n; j++)
       a[n*i+j]=m[n*i+j];
  for(i=0; i<n; i++)
     for(j=0; j<n; j++)
       m[j*n+i]=a[n*i+j];

}


/***************************************************************/


#define N 10

int main()
{  int m[N][N],i,j,n;
   scanf("%d",&n);
   for(i=0; i<n; i++)
     for(j=0; j<n; j++)
       scanf("%d",&m[i][j]);

//********** Transpose is called here **************
   Transpose((int*)m,N); //二维数组降维为一维数组
//**************************************************

   for(i=0; i<n; i++)
     for(j=0; j<n; j++) printf("%d%c",m[i][j],j<n-1?' ':'\n');
   return 0;
}
