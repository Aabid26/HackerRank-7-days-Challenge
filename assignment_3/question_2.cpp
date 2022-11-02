#include <iostream>
using namespace std;

int main() {

  int number, reverse = 0, remainder;

  cout << "Enter an integer: ";
  cin >> number;
int num=number;
int count = 0;
    while (num != 0) {
        num = num / 10;
        ++count;
    }
 if(count<=5)
 {
  while(number != 0) {
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number /= 10;
  }

  cout << "Reverse of Number = " << reverse;
 }
 else
 {
    cout<<"Number can have maximum 5 digits only...!!!";
 } 

  return 0;
}