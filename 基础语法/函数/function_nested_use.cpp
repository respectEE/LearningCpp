/*
    函数作为一个独立的代码单元，可以在函数内调用其他函数，没有任何限制


*/

#include<iostream>
using namespace std;

void send_food(){
    cout << "我给你买了早餐" << endl;
}

void send_flower(){
    cout << "我给你买了玫瑰花，你真好看。" << endl;
}

void say_love(){
    cout << "我喜欢你" << endl;
}

void watch_movie(){
    cout << "我们一起看电影吧" << endl;
}

void i_like_you(int num){
    switch(num){
        case 1:
            send_food();
            send_flower();
            say_love();
            break;
        case 2:
            send_flower();
            say_love();
            watch_movie();
            break;
        case 3:
            watch_movie();
            send_flower();
            say_love();
            break;
        default:
            cout << "今天不追求啦" << endl;
    }
}

int main()
{
    int num;
    cout << "请选择你的追求方案(1/2/3)" << endl;
    cin >> num;
    i_like_you(num);
    return 0;
}