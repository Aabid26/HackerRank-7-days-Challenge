#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;
 int main(){
   vector <int> set_A,set_B;
   int m,n,input=0;
   cout<<"Enter the cardility of set_A";
   cin>>m;
   cout<<"Enter the cardility of set_B";
   cin>>n;
   cout<<"enter elements of set_A";
   for (int i=1;i<=m;i++){
    cin>>input;
    set_A.push_back(input);
   }
   cout<<"enter elements of set_B";
   for (int i=1;i<=n;i++){
    cin>>input;
    set_B.push_back(input);
   }
    
    //displaying set_A & set_B
    cout<<"\ndisplaying set_A"<<endl;
    for (auto &p:set_A){
        cout<<p<<" ";
    }
    
    cout<<"\ndisplaying set_B"<<endl;
    for (int &i:set_B){
        cout<<i<<" ";
    }
    //declaring result vector to
    //store the common elements
    vector<int> set_C(set_A.size() + set_B.size());

    //iterator to store return type
    vector<int>::iterator it, end;

    end = set_intersection(
        set_A.begin(), set_A.end(),
        set_B.begin(), set_B.end(),
        set_C.begin());

    cout << "\nintersection of set_A & set_B \n";
    for (it = set_C.begin(); it != end; it++)
        cout << *it << " ";
    cout << endl;

    vector <int> set_D(set_A.size()+set_B.size());
    it= set_union(
       set_A.begin(),set_A.end(),
       set_B.begin(),set_B.end(),
       set_D.begin() );

   cout<<"\n Union of both the sets \n"<<endl;
    for (int &i:set_D){
        if(i!=0)
        cout<<i<<" ";
    }

 }