/*/////////////////////////////////////////////////////*/
 int gcd(int a,int b)
{
int temp;
if(a<b)
{
//交换两个数，使大数放在a上
temp=a;
a=b;
b=temp;
}
while(b!=0)
{
//利用辗除法，直到b为0为止
temp=a%b;
a=b;
b=temp;
}
return a;
}
 void lcm(int a, int b)
{ //TODO: your definition
long long int c;
c=(long long int)a*(long long int)b/(long long int)gcd(a,b);
printf("%I64d\n", c);
 }


/*/////////////////////////////////////////////////////*/


/***************************************************************/
/*                                                             */
/*  DON'T MODIFY FOLLOWING CODE ANYWAY!                        */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include <stdlib.h>
//********** Specification of lcm **********
void lcm(int a, int b);
/* PreCondition:
     a and b are integers ranging from 1 to 1000,000,000
   PostCondition:
     output the least common multiplier of a and b in one line
*/

void solve()
{
  int a,b; scanf("%d%d",&a,&b);

  //********** lcm is called here **********
  lcm(a,b);
  //****************************************

}

int main()
{  int i,t;
   scanf("%d\n",&t);
   for (i=0;i<t;i++)    { printf("case #%d:\n",i);
     solve();
   }
   return 0;
}
