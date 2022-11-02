#include<iostream>
using namespace std;

int main()
{
	int cost_price,sell_price,result;

	cout<<"Enter cost price of item : "<<endl;
	cin>>cost_price;
	cout<<"Enter selling price of item : "<<endl;
	cin>>sell_price;

	result=sell_price-cost_price;

	if(result>0)
		cout<<"Profit made = "<<result<<endl;
	else
		if(result<0)
    			cout<<"Loss made = "<<-(result)<<endl;
		else
			cout<<"There is no profit no loss";
}