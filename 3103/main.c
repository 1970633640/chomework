/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <math.h>
#include<time.h>
//********** Specification of getpi **********
double getpi()
/* PreCondition:
     None
   PostCondition:
     return pi with %.2f precision
*/

{ //TODO: your function definition
 srand((unsigned)time(0));
 long int i;
 int a=0;

 double tempx,tempy;
 for(i=1;i<2000000;i++){
      tempx=(rand()/32767.0);
      tempy=(rand()/32767.0);
    if(sqrt(tempx*tempx+tempy*tempy)<=1){a+=1;}
 }
return 4.0*a/i;
}

/***************************************************************/

int main()
{

//********** getpi is called here ********************
   printf("%.2f\n",getpi());
//****************************************************

    return 0;
}
