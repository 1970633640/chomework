/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/
 #include <string.h>
#include <stdio.h>
#include <ctype.h>
#define N 8

//********** Specification of hex2int **********
unsigned hex2int(char s[])
/* PreCondition:
     s is a string consisting of 0~9,A-F or a-f with at most 8 characters
   PostCondition:
     return a decimal number equivalent to s
   Examples: "100"==>256 ; "a"==> 10 ; "0"==> 0
*/


{ //TODO: your function definition
 unsigned a=0;

 int i;
 for(i=0;i<N;i++){
     if (s[i]<='9' && s[i]>='0')
        a+=(int)(pow(16,N-i-1-(8-strlen(s)))+0.5)*(int)(s[i]-48);
    else if(s[i]>='a' && s[i]<='f')
        a+=(int)(pow(16,N-i-1-(8-strlen(s)))+0.5)*(int)(s[i]-87);
     else if (s[i]>='A' && s[i]<='F')
      a+=(int)(pow(16,N-i-1-(8-strlen(s)))+0.5)*(int)(s[i]-55);
        else
            a+=0;
 }
 return a;
}

/***************************************************************/

int main()
{  char s[N+1];
   scanf("%s",s);

//********** hex2int is called here ****************
   printf("%u\n",hex2int(s));
//**************************************************

   return 0;
}
