#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,i,j,k,x[10],flag,temp,ans[10]= {0};
    int a[10][35]= {{0}};
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        k=0;
        while (x[i])
        {
            a[i][34-k]=x[i]%2;
            x[i]=x[i]/2;
            k++;
        }


        flag=0;
        for(k=0; k<35; k++)
        {
            if(a[i][k]==1)flag=1;
            if(flag==1    )
            {j=k;
                temp=1;
              while(j<34 && a[i][j]!=a[i][j+1]){temp++;j++;}
              if (temp>ans[i])ans[i]=temp;
            }

        }
        //    printf("\n%d\n",ans[i]);
    }
    for(i=0; i<n; i++)printf("case #%d:\n%d\n",i,ans[i]);
    return 0;
}
