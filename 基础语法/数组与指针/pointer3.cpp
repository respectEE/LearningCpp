/*
    同元素的移除一样，新元素的插入同样需要我们手动实现
    思路：
        1.创建新数组，将老数组元素和新插入元素一起复制到新数组中
        2.要注意，新元素在指定位置插入（老数组元素要配合做下标增加）
*/
#include<iostream>
using namespace std;
int main()
{
    int *pArr = new int[5] {1,3,5,7,9};//在下标1和3插入数字11和66
    int *pNewarr = new int [7];
    for(int i=0,m=0;i<7;i++){
        if(i==1){
            pNewarr[i] = 11;
            m++;
            continue;
        }
        else if(i==3){
            pNewarr[i] = 66;
            m++;
            continue;
        }
        pNewarr[i] = pArr[i-m];
    }
    delete[] pArr;
    pArr = pNewarr;
    for(int j=0;j<7;j++){
        cout << "新数组元素为：" << pArr[j] << endl; 
    }
    return 0;
} 
