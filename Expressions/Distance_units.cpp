#include<bits/stdc++.h>
using namespace std;
int main()
{
	int feets,inches;
	float yards;
	double miles;
	cout<<"Enter the measurement in feets:";
	cin>>feets;
	inches=feets*12;
	miles=feets*0.0001893939;
	yards=feets/3;
	cout<<inches<<" "<<miles<<" "<<yards;
}
