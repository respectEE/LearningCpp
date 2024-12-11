/*
多维数组：对数组进行嵌套，即数组内的每个元素依旧是数组
[0][0]->[0][1]->[0][2]->[1][0]...

多维数组的遍历
*/

#include<iostream>
using  namespace std;

int main()
{
    //int v[3][3];
    //v[0][0] = 11;
    //v[0][1] = 22;
    int v[3][3] = {{11,22,33},{44,55,66},{77,88,99}};
    //同时声明和赋值的写法需在[]内提供数组长度
    for(int i=0 ;i<sizeof(v)/sizeof(v[0]);i++){
        for(int j=0;j<sizeof(v[0])/sizeof(v[0][0]);j++){
            cout << "第" << i << "个一维数组的第" << j << "个元素是" << v[i][j] << endl;
        }
    }
    for(int element: v[0]){
        cout << element << endl;
    }//“高级”for循环只能适用于一维数组
    return 0;
}