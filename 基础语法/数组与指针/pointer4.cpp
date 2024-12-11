/*
    动态内存分配使用得当可以带来性能提升，但如果使用不好可能会带来指针悬挂的问题
    指针悬挂：指针指向区域已经被回收
    eg.     
        int *p1 = new int;
        int *p2 = p1;
        delete p1;
        此时p2指针不能正常使用，因为其指向区域已经被回收
    解决办法：
        1.不要轻易进行指针之间相互赋值
        2.delete回收之前应该确保该空间100%不会再被使用

    常量指针（const指针）
        1.指向const的指针：表示指向区域的数据是不可以变的，但可以更换指向
            语法：
                const 数据类型 * 指针;
                数据类型 const * 指针;
                eg. 
                    int num1 = 10,num2 = 100;
                    const int * p = &num1;
                    *p = 20;//不可修改，错误！
                    p=&num2;//可以修改指向
        2.const指针：指向不可变，数据可变（必须初始化地址，因为地址后续不可以修改了）
            数据类型 * const 指针 = 地址
        3.指向const的const指针：指针指向和指向区域的值都不可以修改
            const 数据类型 * const 指针 = 地址
        用于实现严密的动态空间管控
*/
#include<iostream>
using namespace std;
int main()
{
    int * p1 = new int;
    *p1 = 10;
    int * p2 = p1;//指针在定义时同时赋值时等号右边的是指针指向的内存空间地址
    cout << "p1指针指向的内存区域的值是" << *p1 << endl;
    delete p1;//此时p2指针是悬挂指针
    cout << "p2指针指向的内存区域的值是" << *p2 << endl;
    int num1 = 10,num2 =100;
    const int *p =&num1;
    cout << "指针p当前指向的数据是:" << *p << endl;
    p =&num2;
    return 0;
}