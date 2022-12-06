#include<bits/stdc++.h>
using namespace std;
int main()
{
	int amount;
	float first=0.0,second=0.0,third=0.0;
	cout<<"Enter amount of money deposited into the account:";
	cin>>amount;
	first=(float)amount*4/100+amount;
	second=(float)first*4/100+first;
	third=(float)second*4/100+second;
	cout<<fixed<<setprecision(2)<<first<<" "<<fixed<<setprecision(2)<<second<<" "<<fixed<<setprecision(2)<<third;	
}
