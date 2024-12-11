/*
    if(判断语句，结果是bool型)
    {
        判断结果正确时执行的代码;
    }
    elseif(判断语句，结果是bool型)
    {
        判断结果正确时执行的代码;
    }
    else
    {
        判断结果错误时执行的代码;
    }
*/
#include<iostream>
#include<random>
#include<chrono>
using namespace std;

int get_random_num(int min,int max)
{
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}
int main()
{
    // cout << "今天发工资了" << endl;
    // int money;
    // cout << "请输入小明发的工资" << endl;
    // cin >> money;
    // if (money >= 10000){
    //     cout << "买个新电脑去,花费了9900!" << endl;
    //     money -= 9900;
    // }
    // int love;
    // cout << "熙熙宝宝喜欢我吗?喜欢扣1,不喜欢扣0" << endl;
    // cin >> love;
    // if (love == 1){
    //     cout << "熙熙我也喜欢你!" << endl; 
    // } 
    // else{
    //     cout << "我再给你发一次" << endl;
    // }
    // cout << "今天发的工资还剩下" << money << "元" << endl; 
    int num = get_random_num(1,10);
    string color = get_random_num(0,1) ? "红色" : "黑色";
    string suit; 
    if(color == "红色"){
        suit = get_random_num(0,1) ? "红桃" : "方块";
    }
    else{
        suit = get_random_num(0,1) ? "黑桃" : "梅花";
    }
    cout << num << ":" << color << ":" << suit << endl;
    int guess_num;
    int guess_color;
    int guess_suit;
    cout << "请猜测牌的数字:" << endl;
    cin >> guess_num;
    if(guess_num == num){
        cout << "恭喜你猜对了数字,请继续猜测颜色,红色输入1,黑色输入0" << endl;
        cin >> guess_color;
        if((guess_color? "红色":"黑色") == color) {
            cout << "恭喜你猜对了颜色，请继续猜测花型,红桃输入1,梅花输入2" << endl;
            cin >> guess_suit;
            if((guess_suit?"黑桃":"梅花")== suit) {
                cout << "恭喜你猜对了花型，你赢啦!" << endl;
                }
                else{
                    cout << "很遗憾你猜错了花型" << endl;
                }
            }
        else{
        cout << "很遗憾你猜错了颜色" << endl;
        }
    }
    else{
        cout << "很遗憾你猜错了数字" << endl;
        }
    return 0;
}
