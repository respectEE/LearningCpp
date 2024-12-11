/*
    由于数组对象本身只是第一个元素的地址，所以数组传参不区分值传递还是地址传递
    其本质都是传递的指针（地址）
    eg.
        void func1(int arr[]){
        
        }

        void func2(int arr[10]){
        
        }

        void func3(int *arr){
        
        }
        三种写法是一样的，都等同于传递指针

        传入数组一般建议附带数组长度的传入，因为C++不会检查数组的内存边界

*/

#include<iostream>
using namespace std;

void func1(int arr[]){
    //这里的arr只是一个指针，所以长度只是4，这里sizeof没法正常用
    cout << "函数内统计的数组总大小：" << sizeof(arr) << endl;
}

void func(int * arr,int length){
    //一般函数传递数组时会写上数组的长度
    for(int i = 0; i<length;i++){
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};//一个数字4个字节
    cout << "在main函数内统计的数组总大小：" << sizeof(arr) << endl;
    func1(arr);
    func(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}