#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,x,ans,temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {ans=0;scanf("%d",&x);
      ans+=x;
      while(x>2){ans+=x/3;temp=x/3;x=x-(x/3)*3;x+=temp;}
      printf("%d\n",ans);
  }
    return 0;
}
