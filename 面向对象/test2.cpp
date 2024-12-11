//函数重载

#include<iostream>
using namespace std;

void func(int a){
    cout << "func(int a)的调用" << endl;
}

void func(){
    cout << "func的调用" << endl;
}

int main()
{
    func(10);
    return 0;
}
