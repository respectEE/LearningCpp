#include <iostream>
using namespace std;
/*
标识符的命名规范：
    符号常量：标识符应该尽量大写
    变量：标识符不应大写
    1.见名知意
    2.下划线命名法
    3.小驼峰法
    4.大驼峰法
*/
int main()
{
    int age;
    int a = 10,b = 20, c = 30;
    float height;
    char gender;
    string name;
    age = 21;
    height = 180.5;
    gender = 'm';
    name = "小明";
    cout << "小明的" << "年龄 = " << age << endl;
    cout << "小明的" << "身高 = " << height << endl;
    cout << "小明的" << "性别 = " << gender << endl;
    cout << "小明的" << "姓名 = " << name << endl;
    name = "小红";
    cout << name << endl;
    cout << age+1 << endl;
    return 0;
}
