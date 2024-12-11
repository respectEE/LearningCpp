/*
数组：由一批相同类型的元素的集合所组成是数据结构，分配一块"连续"的内存来存储
数据类型 数组名[数组长度]；
eg. int v[6];//声明可以存放6个int数字的数组，从0到5
可以使用数组名[下标索引]来访问数组内的每个格子（元素）
int v[n] =  {x,...,y};
数组一旦定义完成，其大小已经固定了，在使用时，最好可以做一下数组边界检查
note:
    enum color {RED,GREEN,BLUE};
    color v[] = {RED,BLUE,RED,GREEN};
    char类型也可以加数字（不能太大）

数组的遍历（依次取出元素）

高级for循环：
for(元素类型 临时变量名： 数组变量){
    临时变量存的就是一个个元素
}
eg.
    int arr[]={1,2,3,4,5};
    for(int element: arr){
        cout << element << endl;
    }
*/
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout << arr[i] << endl;
    }
    int arr1[] = {6,7,8,9,10};
    for(int element: arr1){
        cout << element << endl;
    }
    char s[] = "hello";//等价于char s[]={'h','e','l','l','o'};
    cout << sizeof(s) << endl;//字符数组最后会额外添加一个元素\0（空字符）作为结束标记
    for(char i: s){
        cout << i << endl;//中文一个使用string类型，不能使用char数组
    }
    return 0;
}