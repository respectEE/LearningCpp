#include<iostream>
using namespace std;
int main()
{
    int response;
    int reply;
    cout << "熙熙喜不喜欢我呀，喜欢回复1，不喜欢回复0" << endl;
    cin >> response;
    if(response){
        cout << "熙熙喜欢我，高兴";
        cout << "猜猜我喜不喜欢熙熙呀，喜欢扣1，不喜欢扣0" << endl;
        cin >> reply;
        if (response == 1 && reply ==1){
            cout << "熙熙喜欢我，我也喜欢熙熙" << endl;
        }
    }
    else{
        cout << "难受，熙熙不喜欢我" << endl;
        cout << "猜猜我喜不喜欢熙熙呀，喜欢扣1，不喜欢扣0" << endl;
        cin >> reply;
        if (response == 0 && reply ==1){
            cout << "熙熙不喜欢我，我也喜欢熙熙" << endl;
        }
    }
    return 0;
}