/*
    while(条件表达式){
        code;
    }//可以做到条件判断不成立一次都不执行
    
    do{
        code;
    }while(条件表达式);//至少执行一次(先执行后判断)

    for(循环因子初始化;条件判断;循环因子变化){
        code;
    }

    { }内声明的变量，只可以在该{}内进行访问，而main{}函数中声明的变量则可以在整个.cpp文件中访问

    循环中断语句：
        continue：跳过本次循环，进入下一次（eg，for循环中跳到循环因子更新处）
        break：直接结束所在循环

    goto语句：实现无条件跳转（不建议使用哦）
    eg. 
    label1:
        code1;
    ...
    goto label1;
*/
#include<iostream>
using namespace std;
int main()
{
    bool Does_XX_love_XX = true;
    int num = 0;//循环控制因子
    while(Does_XX_love_XX){
        cout << "我爱熙熙" << num << endl;
        num ++;
        if (!(num <= 9))
        Does_XX_love_XX = false;
    }
    return 0;
}