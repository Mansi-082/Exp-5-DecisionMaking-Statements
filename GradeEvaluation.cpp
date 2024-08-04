#include <iostream>
#include <string>
using namespace std;
int main(){
    string grade;
    cout<<"Enter your grade (A, B, C, D, F): ";
    cin>> grade;
    if(grade=="F"){
        cout<<"You Failed";
    } else if(grade!="A"||grade!="B"||grade!="C"||grade!="D"||grade!="F") {
        cout<<"Please enter correct grade.";
    } else{
        cout<<"You Passed";
    }
    return 0;
}