/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include <string.h>
//********** Specification of LongestWord **********
void LongestWord(const char* str,char* result)
/* PreCondition:
     str is a string with length no more than 80
   PostCondition:
     find the first longest word in str, and put it in result.
     changing str is not allowed
*/

{ //TODO: your function definition
 int ll,rr,temp,LL,RR;
 temp=0;
 ll=0;
 //while(*(str+ll)!=' '){ll++;}
 while(ll<strlen(str) ){
        rr=ll;if(rr>=strlen(str))break;
 while(*(str+rr)!=' ' && *(str+rr)!='\0'){
    rr+=1;
     }
 if (temp<rr-ll){temp=rr-ll;RR=rr;LL=ll;}

ll=rr+1;

 }
//printf("  %d  %d  ",LL,RR);
char ANS[89];

int i;
for(i=0;i<89;i++)ANS[i]='\0';
for(i=LL;i<RR;i++)ANS[i-LL]=*(str+i);
ANS[RR]='\0';
strcpy(result,ANS);

}

/***************************************************************/

#define N 80

int main()
{   char s[N+1],r[N+1];
    gets(s);
//********** LongestWord is called here ************
    LongestWord(s,r);
//**************************************************
    printf("%s\n",r);
    return 0;
}
