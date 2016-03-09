#include <stdio.h>
#include <stdlib.h>
long long int jc(int n){
long long int ans=1;
int i;
for(i=1;i<=n;i++)ans*=i;
return ans;

}
int main()
{int fu[21],i,xx,x=0,n;long long int ans;
    scanf("%d",&xx);

   for(i=0;i<xx;i++) {scanf("%d",&n);
    ans=jc(n);x=0;
  //  printf("%I64d    ",ans);
   while(ans!=0){
    if(ans%10==0)
        x++;
    else
        break;
    ans=ans/10;
   }
   fu[i]=x;
}
for(i=0;i<xx;i++)printf("case #%d:\n%d\n",i,fu[i]);
}
