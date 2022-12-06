#include<bits/stdc++.h>
using namespace std;
int main()
{
	int seconds;
	float minutes=0.0,hours=0.0,days=0.0;
	cout<<"Enter seconds:";
	cin>>seconds;
	minutes=(float)seconds/60;
	hours=minutes/60;
	days=hours/24;
	cout<<minutes<<" "<<hours<<" "<<days;
}
