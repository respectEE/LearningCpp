/*
    C++内置并未提供对数组元素进行插入、移除的功能，需要手动实现（vector容器提供）
    移除元素的核心思路是：
        1.通过new操作符，申请新数组的内存空间，并复制数据到新数组
        2.通过delete删除旧数组的空间占用
        3.将旧数组指针，指向新数组地址

*/
#include<iostream>
using namespace std;
int main()
{
    // int * parr = new int[5] {1,3,5,7,9};//attention
    // cout << "老数组首元素地址是" << parr << endl;
    // int * pnewarr = new int[4];
    // cout << "新数组首元素地址是" << pnewarr << endl;
    // for(int i=0;i<5;i++){
    //     if (i==2){
    //         continue;
    //     }
    //     if (i>2){
    //         pnewarr[i-1]=parr[i];
    //     }
    //     else{
    //         pnewarr[i] = parr[i];
    //     }
    // }
    // delete [] parr;//回收老数组
    // parr = pnewarr;//老数组指针指向新数组内存空间
    // cout << "更新后的老数组首元素地址是" << parr << endl;
    // for(int i=0;i<4;i++){
    //     cout << "新数组元素是：" << pnewarr[i] << endl;
    // }
    // return 0;
    int * pArr = new int[10] {3,5,1,11,99,66,22,2,8,6};
    //移除下标为0和5的2个元素，注意节省内存空间
    int * pNewArr = new int[8];
    for(int i=0,m=0;i<10;i++){
        if ((i==0)||(i==5)){
            m++;
            continue;
        }
        else{
            pNewArr[i-m]=pArr[i];
        }
    }
    delete[] pArr;
    pArr = pNewArr;
    for(int j=0;j<8;j++){
        cout << "新的数组元素为:" << pArr[j] << endl;
    }
    return 0;
}