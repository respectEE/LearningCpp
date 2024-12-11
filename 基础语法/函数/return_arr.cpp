/*
    找出数组最大的数字
    实现一个函数：
    1.接收int数组的传入
    2.找出数组中最大的数字
    3.将最大的数字返回（要求返回指针）
    4.分别使用动态内存管理和static实现

    函数返回数组中其实就是返回指针，需要注意数组也不能是局部变量
    eg.
        int * func(){
            ...;
            //eg.   
                static int arr[] = {1,2,3};
                int * arr  = new int {1,2,3};
            return arr;
        }
*/

#include<iostream>
using namespace std;

int * get_num_dynamic(int arr[],int length){
    int * max_num = new int;
    *max_num = arr[0];
    for(int i=0;i<length;i++){
        if (*max_num<arr[i]){
            *max_num = arr[i];
        }
    }
    return max_num;
}

int * get_num_static(int arr[],int length){
    static int * max_num = &arr[0];
    for(int i=0;i<length;i++){
        if (*max_num<arr[i]){
            *max_num = arr[i];
        }
    }
    return max_num;
}

int main()
{
    int arr[] = {3124,546,6,7,68,2,57,678,13866};
    int choose;
    cout << "请选择使用动态内存管理（输入0）还是static（输入1）实现最大值查找" << endl;
    cin >> choose;
    if(choose == 0){
        int *max_num = get_num_dynamic(arr,sizeof(arr)/sizeof(arr[0]));
        cout << "数组最大值为:" << *max_num << endl;
        cout << "它的内存地址为:" << max_num << endl;
        delete max_num;
    }
    else if(choose == 1){
        int *max_num = get_num_static(arr,sizeof(arr)/sizeof(arr[0]));
        cout << "数组最大值为:" << *max_num << endl;
        cout << "它的内存地址为:" << max_num << endl;
    }
    else{
        cout << "输入数字无效，程序结束" << endl; 
    }
    return 0 ;
}