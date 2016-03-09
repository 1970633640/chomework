/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>

#define N 10


//********** Specification of input **********
void input(int* p, int n)
/* PreCondition:
      p points to an array with n integers
   PostCondition:
      enter and store n integers into an array pointed by p
*/
{ //TODO: your function definition
 int i;
 for(i=0;i<n;i++)scanf("%d",p+i);

}

//********** Specification of process **********
void process(int* p, int n)
/* PreCondition:
      p points to an array with n integers
   PostCondition:
      swap smallest number with the first number of an array pointed by p,
      and swap largest number with the last number
*/
{ //TODO: your function definition
int *min,*max,*temp,i;
min=p;max=p;
for(i=0;i<n;i++){

if(*(p+i)<*min)min=p+i;
}
*temp=*min;*min=*p;*p=*temp;
for(i=0;i<n;i++){
if(*(p+i)>*max)max=p+i;}
*temp=*max;*max=*(p+n-1);*(p+n-1)=*temp;

}

//********** Specification of output **********
void output(int* p, int n)
/* PreCondition:
      p points to an array with n integers
   PostCondition:
      print each element of an array pointed by p in one line,
     with one blank between elements.
*/
{ //TODO: your function definition
  int i;
  printf("%d",*p);
 for(i=1;i<n;i++)printf(" %d",*(p+i));

}

/***************************************************************/

int main()
{ int a[N],n;
  scanf("%d",&n);
//***** functions input, process, output are called here *****
  input(a,n);
  process(a,n);
  output(a,n);
//************************************************************
  return 0;
}
