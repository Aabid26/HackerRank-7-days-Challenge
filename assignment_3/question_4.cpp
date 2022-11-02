#include <iostream>  
using namespace std;  
int main()  
{  
int number,sum=0,first_digit,last_digit;    
cout<<"Enter a number: ";    
cin>>number;
int num=number;
int count = 0;
    while (num != 0) {
        num = num / 10;
        ++count;
    }
 if(count<=5)
 {
    last_digit = number % 10;
    while(number >= 10)
    {
        number = number / 10;
    }
    first_digit = number;
    cout<<"Sum of first and fifth digit of number = "<<first_digit+last_digit;
 }
 else
 {
    cout<<"Number can have maximum 5 digits only...!!!";
 }  

return 0;  
}