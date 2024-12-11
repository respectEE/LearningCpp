/*
算数计算符 + - * / % ++ --（a=2,b=a++ -> a=3,b=2）but (a=2,b=++a -> a=3,b=3)
赋值计算符 = += -= *= /= %=
比较计算符 == != < > <= >= 
    对于字符串而言
        C语言中：直接应用比较运算符，比较的是内存地址，而不是内容
            #include "cstring" 
            int result =strcmp(s1,s2);//结果是-1，0，1(小于，等于，大于)
        C++风格中：
            对比两个字符串至少有一个是string类型即可使用运算符比较
            C++对string类型参与的运算符进行了“重载”，确保可以进行内容对比
逻辑运算符 ! && ||
位运算符
三元运算符 
    产出bool结果的表达式 ? 值1 : 值2;
    表达式为真，则提供值1；若为假，则提供值2
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int num1 = +10;
    int num2 = -10;
    cout << num1 << "," << num2 << endl;
    int num3 = 3;
    int num4 = 5;
    bool r1 = num3 == num4;
    cout << r1 << endl;
    cout << "3<=5 :" << (3<=5) << endl;
    char s1[] = "Hello";
    char *s2 = "Hello";
    cout << "s1==s2? " << strcmp(s1,s2) << endl;
    string s3 = "a";
    string s4 = "b";
    cout << "s3是否等于s4:" << (s3 == s4) << endl;
    int num5,num6;
    cout << "输入num5的值:" << endl;
    cin >> num5;
    cout << "输入num6的值:" << endl;
    cin >> num6;
    string judge = (num5>num6) ? "num5大于num6" : "num5小于等于num6";
    cout << judge << endl; 
    return 0;
}