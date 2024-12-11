//内存分区：栈区
#include<iostream>
using namespace std;

int * func(){
    int * a = new int(10);//a指向数字10
        return a;
    }

int main()
{
    int * p = func();
    cout << *p << endl;
    return 0;
}
