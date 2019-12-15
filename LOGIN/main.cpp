#include <iostream>

using namespace std;

int main()
{
    string usr="admin";
    string pw="admin";
    string newUsr, newPw;
    bool islogin = false;
    int counter = 0;

    while(islogin!= true && counter != 3){
        cout << "Username\t: ";cin>>newUsr;
        cout << "Password\t: ";cin>>newPw;
        if(newUsr == usr && newPw == pw){
                cout<<endl;
            cout << "anda berhasil login"<<endl;
            islogin = true;
        }else{
            cout << "username atau password salah !!!"<<endl;
            counter++;
        }
    }
    if(counter ==3){
            cout<<endl;
        cout << "akun anda diblokir"<<endl;
    }
    return 0;
}
