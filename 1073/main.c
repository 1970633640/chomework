#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[1024];
    while(scanf("%s",a)!=EOF){
    int i,j=0;
    for (i=0;i<1024;i++){
        if(a[i]=='\0')break;
        j++;

    }
    printf("%d\n",j);

}
return 0;
}
