#include<iostream>
using namespace std;

struct MinAndMax get_min_and_max(int a , int b);

int get_min(int a,int b){
    return (a<b) ? a : b;
}

int get_max(int a,int b){
    return (a>b) ? a : b;
}

typedef struct MinAndMax
{
    int min;
    int max;
}MinMAX;//记住struct MinAndMax才代表一个数据类型

MinMAX get_min_and_max(int a , int b){
    int min = get_min(a,b);
    int max = get_max(a,b);
    struct MinAndMax v = {min,max};
    return v;
}

int main()
{
    int a,b;
    cout << "输入需要比大小的两个数" << endl;
    cout << "输入第一个数：" << endl;
    cin >> a;
    cout << "输入第二个数：" << endl;
    cin >> b;
    MinMAX v = get_min_and_max(a,b);
    cout << "其中较大的数是：" << v.max << endl << "较小的数是" << v.min << endl;
    return 0;
}