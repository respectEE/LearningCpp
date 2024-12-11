#include <iostream>
#include <windows.h>
using namespace std;
//数字没有任何意义，但是符号有意义。
#define FAT_BMI 28
#define J2C_RATE 4.19 // 焦耳转卡路里的比率
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << FAT_BMI << endl;
    cout << "焦耳转卡路里需要除以：" << J2C_RATE << endl;
    int num;
    cin >> num;
    cout << num << endl;
    return 0;
}