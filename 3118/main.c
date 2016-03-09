#include <stdio.h>
#include <malloc.h>

typedef struct Node
{ int n;
  struct Node* next;
}NODE;
void print(NODE *a);

//********** Specification of Difference **********
NODE *Difference(NODE *a,NODE *b)
/* PreCondition:
     a,b represent two integer sets
   PostCondition:
     return the difference between a and b
*/
{ //TODO: your function definition
NODE *p1,*p2,*aa,*temp;
int i;
p1=a;p2=b;
aa=a;
while(1==1){
while(aa->n==p2->n)aa=aa->next;    //动头
     p1=aa;
while(p1->next!=0){                         //动身体
    if(p1->next->n==p2->n)
        {temp=p1->next;p1->next=p1->next->next;free(temp);}
    else
        p1=p1->next;}
if(p2->next==0)break;              //判断b结束
p2=p2->next;
}
return aa;
}


//append a new node & return the modified linked-list
NODE *append(NODE* r,int n)
{   NODE *p = (NODE*)malloc(sizeof(NODE));
    p->n = n; p->next = r;
    return p;
}

//output all information in a linked-list
void print(NODE *a)
{  if (a) {print(a->next); printf("%d\n",a->n);} }

//free all nodes in a linked-list
void Free(struct Node* a)
{   while (a) { NODE *p = a; a = a->next; free(p); } }

/***************************************************************/
int main()
{ NODE *a=0,*b=0; int n;
  //输入链表a，输入n为0时结束
  while(scanf("%d",&n),n!=0) a=append(a,n);
  //输入链表b，输入n为0时结束
  while(scanf("%d",&n),n!=0) b=append(b,n);
//********** Difference is called here ************
  a = Difference(a,b);
//*************************************************
  print(a); Free(a);Free(b);
  return 0;
}
