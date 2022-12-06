#include<bits/stdc++.h>
using namespace std;
int main()
{
	string month;
	cout<<"Enter the name of a month:";
	cin>>month;
	
	if(month=="february"){
		cout<<"28 or 29 days";
	}
	else if(month=="january"||month=="june"||month=="september"||month=="november"){
		  cout<<"30 days";
	}
	else{
		cout<<"31 days";
	}
}
