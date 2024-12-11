/*
    声明并实现一个函数，完成传入int类型数组并对其进行升序排序，要求：
    1.传入参数中必须包含数组的长度
    2.无返回值
*/

#include<iostream>
using namespace std;

void arr_sort_easy_choose(int arr[],int length){
    int i,j,min_index,temp;
    for(i=0;i<length-1;i++){
        min_index = i; 
        for(j=i+1;j<length;j++){
            if (arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void arr_sort_bubble(int arr[],int length){
    int i,j,temp;
    for(i=0;i<length-1;i++){
        for(j=i;j<length;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_arr(int arr[],int length){
    cout << "排序后的数组为:";
    for(int i=0;i<length;i++){
            cout << arr[i] << " ";
        }
}

int main()
{
    int arr[] = {1,42,546,6,7,2,67,8,9,2346,7457,19408};
    int choose_num;
    cout << "选择使用简单选择排序（输入1）还是冒泡排序（输入2）" << endl;
    cin >> choose_num;
    if(choose_num == 1){
        arr_sort_easy_choose(arr,sizeof(arr)/sizeof(arr[0])); 
        print_arr(arr,sizeof(arr)/sizeof(arr[0]));
    }
    else if(choose_num ==2){
        arr_sort_bubble(arr,sizeof(arr)/sizeof(arr[0]));
        print_arr(arr,sizeof(arr)/sizeof(arr[0]));
    }
    else{
        cout << "选择错误，程序退出" << endl;
    }
    return 0;
}