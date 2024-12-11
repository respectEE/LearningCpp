/*
    结构体：一种用户自定义复合数据类型，可以包含不同类型的不同成员
        struct 结构体类型
        {
            成员1类型 成员1名称；
            ... ...
        };
        eg.
            struct Student{
                string name;
                int age;
                string gender;
            };
    访问成员： 结构体变量.成员名;
    定义和赋值：struct 结构体 变量 = { ,..., }    

    结构体在设计时，可以根据需要向成员设置默认值，成员在定义后可以修改，如果不修改则为默认值
    但是需要注意
*/


#include<iostream>
using namespace std;

int main()
{
    // struct Student{
    //     string name;
    //     int age;
    //     string gender;
    // };//一种新的数据类型
    // //结构体变量的声明可以在前面加上struct关键字（可以省略不写）
    // struct Student stu;//声明结构体变量,声明和赋值可以同步赋值
    // stu = {"周杰伦",11,"男"};
    // cout << stu.name << endl;
    // cout << stu.age << endl;
    // cout << stu.gender << endl;
    // struct Student stu2 = {"林俊杰",12,"男"};
    // cout << stu2.name << endl;
    // cout << stu2.age << endl;
    // cout << stu2.gender << endl;
    struct Student{
        string name;
        int age;
        string addr;
    };
    struct Student stu[5];
    for(int i=0;i<5;i++){
        cout << "正在录入学生" << i+1 << "的信息：" << endl;
        cout << "请输入姓名: " ;
        cin >> stu[i].name;
        cout << endl << "请输入年龄: " ;
        cin >> stu[i].age;
        cout << endl << "请输入地址: ";
        cin >> stu[i].addr;
        cout << endl << "学生" << i+1 << "信息录入完成" << endl;
        cout << "学生" << i+1 << "信息核对:" << "姓名：" << stu[i].name << ",年龄：" << stu[i].age << ",地址："
        << stu[i].addr << "。";
    }
    return 0;
}