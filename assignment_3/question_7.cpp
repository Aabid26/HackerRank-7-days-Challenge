#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int n;

    cout << "Enter size of list= ";

    cin >> n;

    int a;

    cout << "Enter numbers in the list=";

    vector<int> vol;

    for (int i = 0; i < n; i++)

    {

cin >> a;

        vol.push_back(a);

    } 

    for (vector<int>::iterator itr = vol.begin(); itr != vol.end(); itr++)

    {

         cout << *itr << " " ;  

    }
 cout << "\n";
    cout << "Largest integer= " << *max_element(vol.begin(), vol.end()) << endl;

    cout<<"position of largest integer is= "<<max_element(vol.begin(),vol.end())-vol.begin()+1<<endl;

    cout << "Smallest integer= " << *min_element(vol.begin(), vol.end())<<endl;

    cout<<"position of smallest integer is= "<<min_element(vol.begin(),vol.end())-vol.begin()+1<<endl;

}