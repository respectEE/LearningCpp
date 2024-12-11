/*/
   需要实现：主菜单函数、查询函数、存款函数、取款函数
   1.启动要求输入用户姓名
   2.启动后显示主菜单，要求用户输入选择
   3.基于用户选择，提供相应功能
   4.每一个功能内部能显示余额和用户姓名
   5.每一个功能结束后，都会返回主菜单，当用户输入退出或输入错误程序才会退出 


*/

#include<iostream>
using namespace std;

void query_money(const string * const name,int * const money){
    cout << "-------------查询余额-------------" << endl;
    cout << *name << "，您好，您的余额剩余：" << *money << "元" << endl;
} 

void save_money(const string * const name,int * const money,int num){
    cout << "-------------存款-------------" << endl;
    cout << *name << "，您好，您存款" << num << "元成功" << endl;
    *money = *money + num;
    cout << name << "您好，您的余额剩余：" << *money << "元" << endl;
}

void get_money(const string * const name,int * const money,int num){
    cout << "-------------存款-------------" << endl;
    cout << *name << "，您好，您取款" << num << "元成功" << endl;
    *money = *money - num;
    cout << name << "您好，您的余额剩余：" << *money << "元" << endl;
}

int menu(const string * const name){
    //前面const说明指针指向值不可以改，后面const说明指针指向不可以修改
    int num;
    cout << *name << "您好，欢迎来到本银行ATM，请选择操作：" << endl;
    cout << "查询余额\t[输入1]" << endl;
    cout << "存款\t\t[输入2]" << endl;
    cout << "取款\t\t[输入3]" << endl;
    cout << "退出\t\t[输入4]" << endl;
    cin >> num;
    return num;
}

int main()
{
    string name;
    int * money = new int;
    *money = 500000;
    cout << "请输入您的用户名" << endl;
    cin >> name;
    bool is_true = true;
    while(is_true){
        int select_num = menu(&name);
        switch(select_num){
            case 1:
                query_money(&name,money);
                break;
            case 2:
                int i;
                cout << "请输入您需要存多少钱：" << endl;
                cin >> i; 
                save_money(&name,money,i);
                break;
            case 3:
                int j;
                cout << "请输入您需要存多少钱：" << endl;
                cin >> j; 
                get_money(&name,money,j);
                break;
            default:
                cout << "感谢使用，欢迎下次光临！" << endl;
                is_true = false;
        }
    }
    delete money;
    return 0;
}