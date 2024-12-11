/*
    结构体可以使用指针数组，用于动态内存分配，方便管理大量结构体占用的内存
*/
#include<iostream>
using namespace std;

int main()
{
    struct Student{
        string name;
        int age = 11;
        string gender = "男";
    };//数组的对象本质上就是地址
    struct Student *p = new Student[3] {
        {"周杰伦"},
        {"林俊杰"},
        {"王力宏"},
    };
    cout << "数组第一个元素中记录的name是:" << p[0].name << endl;
    delete [] p;
    return 0;
}