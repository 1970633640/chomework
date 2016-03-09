/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>

//********** Specification of i2a **********
char* i2a(char* p,int n)
/* PreCondition:
        n is a non-negative integer, p is a pointer to a buffer
   PostCondition:
        put string representation of n in a buffer pointed by p and return p
*/

{ //TODO: your function definition
 char* pp;
 pp=p;
int ws=0,nn=n,flag=1;
while(nn!=0 ){

 nn=nn/10;
 ws++;
 }
 if(n==0)ws=1;
 //printf("%d\n",ws);
p=p+ws-1;
*(p+1)='\0';
while(n!=0 || flag==1){
        flag=0;
 *p=(n%10)+'0';
 n=n/10;
 p--;
 }
 return 0;
}

/***************************************************************/

int main()
{  int n; char s[20];
   scanf("%d",&n);

//********** i2a is called here ********************
   printf("%s\n",i2a(s,n));
//**************************************************

   return 0;
}
