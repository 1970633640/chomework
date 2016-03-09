/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include <string.h>
//********** Specification of Number2Alpha **********
char* Number2Alpha(int num)
/* PreCondition:
     num is an integer in range [1,12]
   PostCondition:
     return the address of a word that represents month with num
*/
{ //TODO: your function definition
char *b[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

return *(b+num-1);
}
/* Hints Words represent months
"January","February","March",
"April","May","June",
"July","August","September",
"October","November","December"
*/

/***************************************************************/

int main()
{ int num; scanf("%d",&num);
//***** function Number2Alpha is called here *****
  printf("%s\n",Number2Alpha(num));
//************************************************
  return 0;
}
