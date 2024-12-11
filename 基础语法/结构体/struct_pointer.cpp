/*
    结构体指针访问结构体成员时使用的符号是：->
    struct Student * p = &stu 
*/

#include<iostream>
using namespace std;
int main()
{
    struct Student{
        string name;
        string major_code = "003032";
        int dormitory_num = 1;
    };
    //Student stu = {"周杰伦","003001",5};
    //Student *p = &stu;
    //通过new操作符申请指针空间可以动态访问空间
    Student *p = new Student {"周杰伦","003001",5};
    //delete p;
    cout << p->name << endl;
    cout << p->major_code << endl;
    cout << p->dormitory_num << endl;
    //cout << "空间已被清理" << endl;
    return 0;
}