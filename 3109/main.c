/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#define N 80


//********** Specification of strmcpy **********
char* strmcpy(char* t, char* s, int m)
/* PreCondition:
      t points to an array,
      s points to another array,
      m is less than length of string s
   PostCondition:
      copy s starting from m into t, and return t
*/
{ //TODO: your function definition
 int i;
  if(*(s+0)=='\0' ){*(t+0)='\0';return t;}
 for(i=m;*(s+i)!='\0';i++){*(t+i-m)=*(s+i);}
 *(t+i-m)='\0';
return t;
}

/***************************************************************/

int main()
{  char s[N+1],t[N+1]; int m;
   gets(s); scanf("%d",&m);
//********** strmcpy is called here *************************
    printf("%s\n",strmcpy(t,s,m));
//***********************************************************
  return 0;
}
