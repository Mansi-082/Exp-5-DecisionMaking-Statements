//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout << "Enter a number: ";
  cin >> a;
  if(a>7){
      cout<<"Enter valid number";
  } else { 
      switch(a){
          case 1:
          cout<<"Monday";
          break;
          case 2:
          cout<<"Tuesday";
          break;
          case 3:
          cout<<"Wednesday";
          break;
          case 4:
          cout<<"Thursday";
          break;
          case 5:
          cout<<"Friday";
          break;
          case 6:
          cout<<"Saturday";
          break;
          case 7:
          cout<<"Sunday";
          break;
        }
  }
  return 0;
 }
