#include <iostream>
#include <cstdio>
#include <cstring>

int main()
{
    char eg[10000];   //输入一个八进制小数
    while ( scanf("%s", eg) != EOF ){
        //输出的十进制小数（没有0.），定义同时进行初始化eg_10[0] = ‘0’
        char eg_10[10000] = {'0'};
        //记录十进制小数的位数
        int index = 0;

        int i(strlen(eg) - 1);//对i定义并初始化，我写的是c++的，c就是i = ……
        for ( ; i != 1; --i ){
            int num = eg[i] - '0';//八进制小数的当前位，同时也是下面计算的余数

            /*****************************************************
             *除8的高精度计算
             */
            int j(0);
            //num也就是余数要除尽。
            for ( ; (j < index )|| num; ++j ){
                int temp = num*10 + (j < index ? eg_10[j] - '0' :0 );
                eg_10[j] = temp/8 + '0';    //商
                num = temp%8;      //余数
            }
            /******************************************************/

            index = j;   //十进制小数的位数
        }

        eg_10[index] = '\0';
        printf("%s [8] = 0.%s [10]\n",eg, eg_10);
    }

    return 0;
}
