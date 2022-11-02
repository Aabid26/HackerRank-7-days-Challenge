#include <iostream>
using namespace std;

int main() {

  int number, rev = 0, r;

  cout << "Enter an integer: ";
  cin >> number;
  int originalNum=number;
int num=number;
int count = 0;
    while (num != 0) {
        num = num / 10;
        ++count;
    }
 if(count<=5)
 {
  while(number != 0) {
    r = number % 10;
    rev = rev * 10 + r;
    number /= 10;
  }
    cout << "Original Number = " << originalNum <<endl;
  cout << "reverse  of Number = " << rev <<endl;;
  if(rev>originalNum)
  {
    cout<<"reverse  is greater than Original number"<<endl;
  }
  else
  {
    cout<<"Original number is greater than Reverse"<<endl;;
  }
 }
 else
 {
    cout<<"Number can have maximum 5 digits only...!!!";
 } 

  return 0;
}