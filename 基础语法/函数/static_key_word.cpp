/*
    static是C++的关键字，表示静态，可以修饰变量和函数
    当static修饰变量时，比如函数内的局部变量，可以延长其声明周期到整个程序运行周期
    eg.
        int * add(int a,int b){
            static int sum;
            sum = a+b;
            return &sum;
        }
*/
#include<iostream>
using namespace std;

int * add(int a,int b){
    static int sum;
    sum = a+b;
    return &sum;
}

int main()
{
    int *result1 = add(1,2);
    cout << *result1 << endl;
    cout << "内存地址为：" << result1 << endl;
    delete result1;
    return 0;
}