/*/
    ------------------------通讯录------------------------
    系统需求：
    1. 添加联系人：向通讯录中添加新人，信息包括姓名、性别、年龄、联系电话、家庭住址，最多可以记录1000人
    2. 显示联系人：显示通讯录中所有联系人信息
    3. 删除联系人：按照姓名进行删除指定联系人
    4. 查找联系人：按照姓名查看指定联系人信息
    5. 修改联系人：按照姓名重新修改指定联系人
    6. 清空联系人：清空通讯录中所有信息
    7. 退出通讯录：退出当前使用的通讯录

    // by LH 2024/12/06 
*/

#include<iostream>
#include<fstream>//文件读取与写入
using namespace std;

struct contacts{
    string name;
    string gender;
    int age_num;
    string tel;
    string address;
};

struct contacts *contact_list = new struct contacts[1000];
int contact_num = 0;
string Delete_name;
string Search_name;
string Modify_name;

void Add_c(){
    cout << "请输入您需要添加的联系人的姓名: ";
    cin >> contact_list[contact_num].name;
    cout << endl << "请输入您需要添加的联系人的性别: ";
    cin >> contact_list[contact_num].gender;
    cout << endl << "请输入您需要添加的联系人的年龄: ";
    cin >> contact_list[contact_num].age_num;
    cout << endl <<  "请输入您需要添加的联系人的联系电话: ";
    cin >> contact_list[contact_num].tel;
    cout << endl <<  "请输入您需要添加的联系人的家庭住址:";
    cin >> contact_list[contact_num].address;
    cout << endl << "信息录入成功" << endl;
    contact_num++;
}

void Show_c(){
    cout << "-------------------------------联系人信息如下-------------------------------" << endl;
    for(int i=0;i<contact_num;i++){
        cout << "------------------------------------------------------------------------" << endl;
        cout << "第" << i+1 << "个联系人信息如下" << endl;
        cout << "姓名: " << contact_list[i].name << endl;
        cout << "性别: " << contact_list[i].gender << endl;
        cout << "年龄: " << contact_list[i].age_num << endl;
        cout << "电话：" << contact_list[i].tel << endl;
        cout << "家庭住址: " << contact_list[i].address << endl;
    }
}

void Delete_c(string Delete_name){
    for(int i=0;i<contact_num;i++){
        if(Delete_name == contact_list[i].name){
            for(int j=i;j<contact_num;j++){
                contact_list[j] = contact_list[j+1];
            }
            contact_num--;
        }
        else if(i==contact_num){
            cout << "查无此人" << endl;
        }
    }
}

void Search_c(string Search_name){
    for(int i=0;i<contact_num;i++){
        if(Search_name == contact_list[i].name){
            cout << "------------------------------------------------------------------------" << endl;
            cout << "联系人" << Search_name << "的信息如下" << endl;
            cout << "姓名: " << contact_list[i].name << endl;
            cout << "性别: " << contact_list[i].gender << endl;
            cout << "年龄: " << contact_list[i].age_num << endl;
            cout << "电话：" << contact_list[i].tel << endl;
            cout << "家庭住址" << contact_list[i].address << endl;
        }
        else if(i==contact_num){
            cout << "查无此人" << endl;
        }
    }
}

void Modify_c(string Modify_name){
    for(int i=0;i<contact_num;i++){
        if(Modify_name == contact_list[i].name){
            Search_c(Modify_name);
            cout << "请修改" << Modify_name << "的信息" << endl;
            cout << "请输入修改后的姓名: ";
            cin >> contact_list[contact_num].name;
            cout << endl << "请输入修改后的性别: " << endl;
            cin >> contact_list[contact_num].gender;
            cout << endl << "请输入修改后的年龄: " << endl;
            cin >> contact_list[contact_num].age_num;
            cout << endl << "请输入修改后的联系电话: " << endl;
            cin >> contact_list[contact_num].tel;
            cout << endl << "请输入修改后的家庭住址: " << endl;
            cin >> contact_list[contact_num].address;
            cout << endl << "修改成功!" << endl;     
        }
    }
}

void Clear_c(){
    // 释放内存
    delete[] contact_list;
    // 重新分配内存，大小仍然是1000
    contact_list = new struct contacts[1000];
    // 重置联系人数量
    contact_num = 0;
    cout << "联系人已清空" << endl;
}

int main()
{
    ofstream outFile;  // 创建输出文件流对象
    ifstream inFile;   // 创建输入文件流对象    
    outFile.open("Contact.txt");  // 打开文件用于写入
    inFile.open("Contact.txt");   // 打开文件用于读取
    bool is_continue = true;
    int choose_num;
    cout << "-------------------------------欢迎进入到本通讯录-------------------------------" << endl;
    while(is_continue){
        cout << "-----------------------------请选择你需要进行的操作-----------------------------" << endl;
        cout << "1.添加联系人" << endl;
        cout << "2.显示联系人" << endl;
        cout << "3.删除联系人" << endl;
        cout << "4.查找联系人" << endl;
        cout << "5.修改联系人" << endl;
        cout << "6.清空联系人" << endl;
        cout << "7.退出通讯录" << endl;
        cin >> choose_num;
        switch(choose_num){
            case 1:
                Add_c();
                break;
            case 2:
                Show_c();
                break;
            case 3:
                cout << "请输入您需要删除的联系人的姓名：" << endl;
                cin >> Delete_name;
                Delete_c(Delete_name);
                break;
            case 4:
                cout << "请输入您需要查找的联系人的姓名：" << endl;
                cin >> Search_name;
                Search_c(Search_name);
                break;
            case 5:
                cout << "请输入您需要修改的联系人的姓名：" << endl;
                cin >> Modify_name;
                Modify_c(Modify_name);
                break;
            case 6:
                Clear_c();
                break;
            default:
                cout << "通讯录已退出" << endl;
                is_continue = false;
        }
    }
    //下面进行数据在文件中的存入
    if (outFile.is_open()) {
        outFile << "------------------------------------------------通讯录（Version: 2024/1206）------------------------------------------------" << endl;
        for(int i=0;i<contact_num;i++){
            outFile <<"联系人序号:" << i+1 << "\t\t姓名: "<< contact_list[i].name << "\t\t性别：" << contact_list[i].gender<< "\t\t年龄："
            << contact_list[i].age_num << "\t\t联系电话 " << contact_list[i].tel << "\t\t家庭住址: " << contact_list[i].address << endl;
        }
        outFile.close();
    } 
    else {
        cout << "Unable to open file for writing.";
        return 1;
    }
    if(contact_num>0){
        delete [] contact_list;
    }
    return 0;
}