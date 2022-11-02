#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int size, temp, num;
    vector<int> vec1;
    vector<int> vec2;

    cout << "Enter size of list= "<<endl;

    cin >> size;


    cout << "Enter numbers in the list="<<endl;

    for (int i = 0; i < size; i++)

    {

         cin >> temp;

        vec1.push_back(temp);

    } 
    cout<< "Enter ineteger to divide list = "<<endl;
    cin>>num;
    cout<<"Original List ="<<endl;
    unsigned int vec1Size = vec1.size();
  for( int i = 0; i < vec1Size; i++)
  {
    cout << vec1[i] << " ";
  }
  for( int i = 0; i < vec1Size; ++i)
  {
   if(vec1[i]%num==0)
   {
    int input=vec1[i];
    vec2.push_back(input);
   }
  }
  cout<<"\n";
  unsigned int vec2Size = vec2.size();
  cout<<"List of elements divisible by"<<num <<" is ="<<endl;
  for( int i = 0; i < vec2Size; i++)
  {
    cout << vec2[i] << " ";
  }
  cout<<"\n";
  cout << "Size of Divisibility Vector = "<<vec2Size;
}