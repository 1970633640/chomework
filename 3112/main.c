#include <stdio.h>
#include <stdlib.h>
//********** Specification of Input **********

char** Input(int n)
/* PreCondition:
         n is  the count of strings
   PostCondition:
          input n strings, and return the address of the char* array
*/
{ //TODO: your function definition
int i;


char **p;
p=(char**)malloc(100);
for(i=0;i<n;i++)p[i]=malloc(100);
for(i=0;i<n;i++)scanf("%s",p[i]);
//printf("|||%d|||",sizeof(&p[0]));

// for(i=0; i<n; i++) printf("%s\n",p[i]);
return p;
}

//********** Specification of Free **********
void Free(char**a, int n)
/* PreCondition:
     a points to a char* array in free store (heap), n is a positive integer
   PostCondition:
     free ***ALL*** memory allocated in Input function
*/
{ //TODO: your function definition
int i;
for(i=0;i<n;i++)free(a[i]);
}
int cmp(const void*a,const void*b)
{//printf("  ||  %s  %s   ||      \n",(char*)a,(char*)b);
    return strcmp(*(char**)a,*(char**)b);}
//********** Specification of Sort **********
void Sort(char **a, int n)
/* PreCondition:
         a is pointer which points to an array of char* pointers, and n is a positive integer
   PostCondition:
         a is sorted satisfying to the specification
*/
{ //TODO: your function definition

qsort(a,n,sizeof(a[0]),cmp);
}

/***************************************************************/

int main()
{ char** p; int n,i;  scanf("%d",&n);
//********** Input is called here **********
  p = Input(n);
//******************************************
//********** Sort is called here ***********
  Sort(p,n);
//******************************************
   for(i=0; i<n; i++) printf("%s\n",p[i]);
  Free(p,n);
//******************************************

  return 0;
}
