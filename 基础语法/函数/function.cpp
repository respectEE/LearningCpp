/*
    函数：一个提前封装好的可以重复使用的完成特定功能的独立代码单元
    将针对特定功能的、有重复使用需求的代码提前封装到函数内，在需要的时候随时调用
        返回值类型 函数名称(参数声明)//形参
        {
            return 返回值;
        }//函数体

    函数返回值并非是必须提供的，即可以声明函数不提供返回值
        void say_hello(string name){
            cout << name << "你好，我是程序员" << endl; 
        }

    函数传入参数也是可选的，即声明不需要形参的传入,但括号必须要写
        void i_like_you(){
            for(int i=0;i<5;i++){
                cout << "我喜欢你" << endl;
            }
        }
*/
#include<iostream>
using namespace std;

int get_max(int m,int n){
    return (m>n) ? m:n;
}

void say_hello(string name){
    cout << name << "你好，我是程序员" << endl;
}

void i_like_you(){
    for(int i=0;i<5;i++){
        cout << "我喜欢你" << endl;
    }
}

int main()
{
    int m=1,n=2;
    cout << get_max(m,n) << endl;
    cout << get_max(100,99) << endl;//实参
    say_hello("LH");
    i_like_you();    
    return 0;
}