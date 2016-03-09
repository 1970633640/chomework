/*/////////////////////////////////////////////////////*/

 void lcm(int a, int b)
{ //TODO: your definition
 long int c;
     if (a>b)c=a ;
    if (b>=a)c=b;
 while(1==1){
 if((c%a==0)&&(c%b==0))
    {
        break;

    }
c=c+1;

 }
printf("%d\n", c);
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
 return
int main()
{  int i,t;
   scanf("%d\n",&t);
   for (i=0;i<t;i++)    { printf("case #%d:\n",i);
     solve();
   }
   return 0;
}
