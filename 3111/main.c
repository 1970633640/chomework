/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10


//********** Specification of Sort **********
#define LEN 80
int cmp( const void *a , const void *b )

{ return strcmp((char *)a , (char *)b); }
void Sort(char (*a)[LEN+1], int n)
/* PreCondition:
          a is row pointer which points to an array of strings
          (represented by a two-dimensional array of chars),
          and n is the count of strings
    PostCondition:
          a is sorted satisfying to the specification
*/
{ //TODO: your function definition
qsort(a,n,sizeof(a[0]),cmp);
}

/***************************************************************/

int main()
{ char a[N][LEN+1]; int i,n;
  scanf("%d",&n);
for(i=0;i<n;i++) scanf("%s",a[i]);
//********** Sort is called here **********
  Sort(a,n);
//*****************************************
  for(i=0;i<n;i++) printf("%s\n",a[i]);

  return 0;
}
