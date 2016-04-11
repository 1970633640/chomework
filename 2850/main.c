#include <stdio.h>
#include <stdlib.h>
int nyears (int y)
{
    if((y % 4 == 0 && y % 100 != 0) ||y % 400 ==0) return 366;
    else return 365;
}

int nmonths (int y,int m)//获取某一月的天数
{
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
    else if (nyears(y)==366&&m==2) return 29;
    else if (nyears(y)==365&&m==2) return 28;
    else return 30;
}
int getday (int year,int month)
{
    int i,sum=0;
    if (year>2008)
    {
        for (i=2008; i<year; i++)
            sum+=nyears(i);
    }
    if (month>1)
        for (i=1; i<month; i++)
            sum+=nmonths(year,i);
    return sum;
}
int main()
{
    int i,j,sum,year,day;
    while ((scanf("%d",&year))!=EOF)
    {
        sum=getday(year,2)-getday(2008,2);
        day=(sum%7+5)%7;
        printf(" SU MO TU WE TH FR SA\n");
        for (i=0; i<day; i++)
            printf("   ");
        for (i=1,j=day; i<=nmonths(year,2); i++,j++)
        {
            if((j%7==0)&&(i!=1)) printf("\n");
            printf(" %2d",i);
        }
        printf("\n");
        printf("\n");
    }
}
