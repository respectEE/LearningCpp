/*
    函数可以进行值传递和地址传递
    进行值传递时，仅仅进行赋值；进行地址传递时，直接作用于内存上
    
*/

#include<iostream>
using namespace std;

void switch_num(int a,int b){
    int c;
    c = a;
    a = b;
    b =c;
}

void switch_pointer(int &a,int &b){//&表示取引用
    int c = a;
    a = b;
    b = c;
}

int main()
{   
    int a=1,b=2;
    switch_num(a,b);
    cout << a << "\t"<< b << endl;
    switch_pointer(a,b);
    cout << a << "\t"<< b << endl;
    return 0;
}