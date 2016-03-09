/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>
//********** Specification of GCD **********
int GCD(int m,int n)
/* PreCondition:
     m,n are two positive integers
   PostCondition:
     return Greatest Common Divisor of m and n
*/

{ //TODO: your function definition
 if(m==0 || n==0)
    return m;
 else
 {int t;
 t=(m<n)?m:n;
 n=((m<n)?n:m)%t;
 m=t;
 GCD(m,n);
 }
}

/***************************************************************/

int main()
{   int m,n;
    scanf("%d%d",&m,&n);

//********** GCD is called here ********************
    printf("GCD(%d,%d)=%d\n",m,n,GCD(m,n));
//**************************************************

    return 0;
}
