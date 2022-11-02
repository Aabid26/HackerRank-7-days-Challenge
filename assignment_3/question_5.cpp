#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int n , add_element;
    deque <int> digits , new_digits;
    cout<<"enter five digit number\n";
    cin>>n;
    // while(n%100000>0 && n%100000<9){
    //     cout<<"please enter 5 digit ";
    //     cin>>n;
    // }
    cout<<"successfull insertion\n";
  while (n > 0)
{
    int digit = n%10;
    n/= 10;
    digits.push_front(digit);
}

    for(int i : digits){
        cout<<i<<" ";
    }
   cout<<"\n enter number to add to digits: \n";
    cin>>add_element;
    cout<<"\nAfter adding to each digits\n";
    for (int i =0; i<digits.size();i++){
        int new_digit=add_element+digits[i];
        cout<<new_digit;
    }
   
}
