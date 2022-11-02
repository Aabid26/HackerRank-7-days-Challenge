#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int n, temp, num;
    vector<int> V1;
    vector<int> V2;

    cout << "Enter size of list= "<<endl;

    cin >> n;


    cout << "Enter numbers in the list="<<endl;

    for (int i = 0; i < n; i++)

    {

         cin >> temp;

        V1.push_back(temp);

    } 
    cout<< "Enter ineteger to multiply list = "<<endl;
    cin>>num;
    cout<<"Original List ="<<endl;
    unsigned int vec1Size = V1.size();
  for( int i = 0; i < vec1Size; i++)
  {
    cout << V1[i] << " ";
  }
    for( int i = 0; i < vec1Size; ++i)
  {
   int input=num*V1[i];
V2.push_back(input);
  }
  cout<<"\n";
  cout<<"List After Multiplication ="<<endl;
  for( int i = 0; i < vec1Size; i++)
  {
    cout << V2[i] << " ";
  }
}