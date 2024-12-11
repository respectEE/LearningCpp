/*
switch(expression){
    case expression_1://相等判断
    code;
    break;//跳出当前break（若无break，则继续向下执行
    eg.在下面输出星期几中，如果去掉星期一对应的break，则输入1后会同时输出星期一和星期二
    因此可以借用这个特性实现范围输出，例如可以删掉周六对应break实现无论是周六还是周天都可以输出周末）
    case expression_2:
    code;
    break;
    ...
    ...
    case expression_n;
    code;
    break;
    default: //无匹配值
    ...
}
枚举：(本质上是数字，对数字进行具象化)被命名的整型常数的集合，用于提高代码可读性
    enum DAY
        {
            MON, TUE, WED, THU, FRI, SAT, SUN
        };//默认第一个数是0，但可以通过认为设置初始编号大小调整，后面依次递增
    enum DAY
        {
            MON=1, TUE, WED, THU, FRI, SAT, SUN
        };
enum DAY day;
*/

#include<iostream>
using namespace std;

int main()
{
    // 输入数字1-7，输出星期几
    int day;
    // cout << "输入数字告知星期几（1—7）" << endl;
    // cin >> num;
    // switch(num){
    //     case 1 :
    //         cout << "今天是星期一" << endl;
    //         break;
    //     case 2 :
    //         cout << "今天是星期二" << endl;
    //         break;
    //     case 3 :
    //         cout << "今天是星期三" << endl;
    //         break;
    //     case 4 :
    //         cout << "今天是星期四" << endl;
    //         break;
    //     case 5 :
    //         cout << "今天是星期五" << endl;
    //         break;
    //     case 6 :
    //         cout << "今天是星期六" << endl;
    //         break;
    //     default:
    //         cout << "今天是星期天" << endl;
    // }
    enum DAY
        {
            MON=1, TUE, WED, THU, FRI, SAT, SUN
        };
    cout << "输入数字告知星期几（1—7）" << endl;
    cin >> day;
    switch(day){
        case MON :
            cout << "今天是星期一" << endl;
            break;
        case TUE :
            cout << "今天是星期二" << endl;
            break;
        case WED :
            cout << "今天是星期三" << endl;
            break;
        case THU :
            cout << "今天是星期四" << endl;
            break;
        case FRI :
            cout << "今天是星期五" << endl;
            break;
        case SAT :
            cout << "今天是星期六" << endl;
            break;
        default:
            cout << "今天是星期天" << endl;
    }
    return 0;
}