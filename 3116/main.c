#include <stdio.h>
#include <malloc.h>
//********** Specification of josephus **********
int josephus(int n,int k)
/* PreCondition:
      n and k are positive integer,and k
  PostCondition:
      return the number of lucky survivor(counting from 1 to n)
*/

{ //TODO: your function definition
struct number{
int num;
struct  number *next;
};
int i;
struct number *head,*p1,*p2;
p1=p2=(struct number*)malloc(sizeof(struct number));
p1->num=1;
head=p1;
for(i=2;i<=n;i++){
p2=(struct number*)malloc(sizeof(struct number));
p2->num=i;
p1->next=p2;
p1=p2;

}

p1->next=head;
p1=head;

while ((p1->next) !=p1  )
{
  for(i=0;i<k-2;i++)p1=p1->next;
  p2=p1;
p1=p1->next;
p2->next=p1->next;
p1=p1->next;

//printf("---\n");
}



return  p1->num;
}

/***************************************************************/

int main()
{   int n,k;
    scanf("%d%d",&n,&k);
//********** josephus is called here ************
    printf("%d\n",josephus(n,k));
//***********************************************
    return 0;
}
