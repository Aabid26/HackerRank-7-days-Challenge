#include <iostream>  
using namespace std;  
int main()  
{  
int number,sum=0,rem;    
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
while(number>0)    
{    
rem=number%10;    
sum=sum+rem;    
number=number/10;    
}    
cout<<"Sum of digits is= "<<sum<<endl;
 }
 else
 {
    cout<<"Number can have maximum 5 digits only...!!!";
 }  

return 0;  
}