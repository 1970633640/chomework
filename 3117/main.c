#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{   int n;
    struct Node* next;
}NODE;


//********** Specification of Sort **********
NODE *Sort(NODE *head)
/* PreCondition:
     head points to a linked-list
   PostCondition:
     return head of sorted linked-list
*/

{ //TODO: your function definition
NODE *p1;
int x=0;
p1=head;
while(p1){
x++;
p1=p1->next;
}
int i;
int temp;

for(i=0;i<x;i++){p1=head;
while(p1->next){
if(p1->n>(p1->next)->n) {temp=p1->n;p1->n=(p1->next)->n;(p1->next)->n=temp;}
p1=p1->next;

}}
return head;
}

#include <malloc.h>

//append a new node & return the modified linked-list
NODE *append(NODE* r,int n)
{   NODE *p = (NODE*)malloc(sizeof(NODE));
    p->n = n; p->next = r;
    return p;
}

//output all information in a linked-list
void print(NODE *a)
{   while (a) { printf("%d\n",a->n); a = a->next; }  }

//free all nodes in a linked-list
void Free(struct Node* a)
{   while (a) { NODE *p = a; a = a->next; free(p); } }

/***************************************************************/

int main()
{ NODE *a=0; int n;
  //输入链表a，输入n为0时结束
  while(scanf("%d",&n),n!=0) a=append(a,n);
//********** Sort is called here ************
  a = Sort(a);
//*******************************************
  print(a); Free(a);
  return 0;
}
