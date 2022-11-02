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
    cout<< "Enter integer which smallest ineteger you want = "<<endl;
    cin>>num;

    std::sort(vec1.begin(),vec1.end());

    unsigned int vec1Size = vec1.size();
    if(num>vec1Size || num<0)
    {
        cout<<"Element not present "<<endl;
    }
  for( int i = 0; i < vec1Size; i++)
  {
    if(i==num)
    {
     cout<<num<<"th smallest number of list = " << vec1[i-1] << " ";
    }
    
  }
  

}