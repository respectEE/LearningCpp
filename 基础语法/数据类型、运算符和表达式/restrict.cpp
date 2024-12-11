/*
标识符是用来给变量、常量、函数、类、接口等元素命名的字符序列。
标识符命名规则：
    1.内容限定，即仅可使用字母、数字、下划线组合，且数字不可开头
    2.大小写敏感
    3.不可使用关键字（eg.int）

整型：
    short：2字节（有符号：-2^15——2^15-1;无符号：0——2^16-1,即0-65535，一般默认有符号,无符号可以用u_short/u_int/u_long/unsighed int）
    int：4字节（默认情况下写的整型都是int类型）
    long：Windows--4字节；Linux--8字节
    long long的0长整型：8字节
    可以使用sizeof()查看占用字节
    无符号数；有符号数
    此外，常量也有后缀，例如10L指定位long型，123UL指定为unsigned long型
    U；L；UL；ULL；F；D
实型：（实型默认有符号，没有signed和unsigned）
    float：4字节，有效位数（包括整数位、小数位、小数点）6-7位（单精度浮点数）
    double：8字节，有效位数15-16位（双精度浮点数）
    long double：16字节，有效位数18-19位（多精度浮点数）
字符型：
    char:1字节（-128——127，ASCII表，97对应a，65对应A）
    unsigned char：1字节（0——255，ASCII表）
转义字符：将普通的字符使用\作为开头，将其含义进行转换，对照得到ACSCII表的控制字符的功能
    \n 换行 \t 制表符 \\ 表示反斜杠本身 \'表示单引号 \"表示双引号
字符串：
    c语言风格字符串：
        char a[] = "itheima";不能直接跳过赋值语句修改
        char *b = "itcast";可以通过赋值语句修改
    c++语言风格字符串：
        string c = "c++";可以通过赋值语句修改
    使用to_string()可以将非字符串类型转为字符串
布尔型：
    true/false？（互斥）
    eg. bool flag = true;
数据输入：
    数据类型 变量;//变量声明
    cin >> 变量;//输入的数据提供给变量
*/

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    short age = 21;
    int num1 = 10;
    long num2 = 20;
    long long num3 = 30;
    cout << "short变量,占用字节数：" << sizeof(age) << endl;
    cout << "int变量,占用字节数：" << sizeof(num1) << endl;
    cout << "long变量,占用字节数：" << sizeof(num2) << endl;
    cout << "long long变量,占用字节数：" << sizeof(num3) << endl;
    u_int height = 172;
    cout << height << endl;
    cout << "\n" << height << endl;
    cout << "\\" << "Hello\t,I love you" << endl;
    cout << "\\" << "Thanks\t,I also love you" << endl;
    //字符串的拼接
    string major = "物理";
    string class_name = "一班";
    string name = "小黑";
    float height2 = 172.5;
    string msg = "我的专业是" + major + "，我来自" + class_name + "，我叫做：" + name + "，我的身高是" + to_string(height2);
    cout << msg << endl;
    int number;
    cin >> number;
    cout << number << endl;
    return 0;
}