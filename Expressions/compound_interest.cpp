#include<bits/stdc++.h>
using namespace std;
int main()
{
	int amount;
	float first=0.0,second=0.0,third=0.0;
	cout<<"Enter amount of money deposited into the account:";
	cin>>amount;
	first=(float)4/100+amount;
	second=(float)4/100+first;
	third=(float)4/100+second;
	cout<<first<<" "<<second<<" "<<third;	
}
