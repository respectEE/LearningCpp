/*
指针和数组综合
    排序问题
    1.简单选择排序:
        算法会遍历数组，找到最小（或最大）的元素，并将其与当前位置的元素交换
    2.冒泡排序
        通过比较相邻元素并交换它们（如果它们的顺序错误）来工作。这个过程重复进行，较大的元素会逐渐“冒泡”到数组的末尾
*/
#include<iostream>
using namespace std;
int main()
{
    int * p = new int[10] {3,5,1,11,99,66,22,2,8,6};
    //简单选择排序
    int min;//记录最小值
    int min_index;//记录最小值所在下标
    int a;
    for (int i=0;i<9;i++){
        for(int j=i;j<10;j++){
            if(j==i){
                min=p[j];
                min_index =j;
            }
            if(p[j]<min){
                min=p[j];
                min_index=j;
            }
        }
        //进行交换，第一次是0下标，第二次是1下标，以此类推
        a = p[i];
        p[i] = p[min_index];
        p[min_index] = a;
    }
    for(int k=0;k<10;k++){  
        cout << p[k] << ",";
    }
    return 0;
}