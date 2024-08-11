//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;
int main(){
    string password;
    cout<<"Enter password: ";
    cin>> password;
    if(password=="Password"){
        cout<<"Access Granted";
    } else {
        cout<<"Access Denied";
    }
    return 0;
}
