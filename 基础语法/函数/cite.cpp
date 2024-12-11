/*
    函数的形参还有引用传参的形式
    引用：变量的一个别名，他是某个已存在变量的另一个名字
    指针的指向可以修改，但引用不可以修改
    1.引用创建后，不可更改
    2.因为不可更改，所以引用必须初始化
    3.因为必须初始化，所以引用不可以为空
    
    数据类型& 引用名 = 引用变量;
    eg.
        int a = 10;
        int &b = a;
        double d1 = 11.11;
        double &d2 = d1;

    引用传参：最为常见的传参方式
    使用引用传参们可以像普通变量那样操作，但可以对实参本身产生影响
    eg.
        void switch_num(int &a,int &b){
            int temp; 
            temp = a;
            a = b;
            b = temp;//相当于形参对实参的引用，和操纵形参本身一样
            //但不进行内存操作，比较安全
        }
*/

#include<iostream>
using namespace std;

void switch_num1(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void switch_num2(int *a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void switch_num3(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    // int a = 10;
    // int &b = a;
    // cout << "a= " << b << endl;
    // cout << "b= " << a << endl;
    int a=1,b=2;
    cout << "原来a、b输出为：" << a << b << endl;
    switch_num1(a,b);
    cout << "值传递后的a、b输出为：" << a << b << endl;
    switch_num2(&a,&b);
    cout << "地址传递后的a、b输出为：" << a << b << endl;
    switch_num3(a,b);
    cout << "引用传递后的a、b输出为：" << a << b << endl;
    return 0;
}