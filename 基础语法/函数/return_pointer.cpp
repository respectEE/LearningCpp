/*
    函数的返回值可以是一个指针（内存地址），语法如下：
        返回值类型 * 函数名(形参列表){
            函数体;
            return 指针;
        }
        //在声明中提供*表示返回值是指针，再return指针(地址)即可
        eg.
            int * add(int a,int b){
                int sun;
                sun = a+b;
                return &sum;
            }
            //语法正确，但无法返回正常结果
            在函数内部创建的变量其作用范围只在函数内部生效
            函数执行完毕后，变量销毁并释放所占空间
            //此时sun变量仅仅是一个局部变量（C++静态内存管理，规避需要动态内存管理）

*/

#include<iostream>
using namespace std;

int * add(int a,int b){
    int * sum = new int;
    *sum = a+b;
    return sum;
}

int main()
{
    int *result1 = add(1,2);
    cout << *result1 << endl;
    delete result1;
    return 0;
}