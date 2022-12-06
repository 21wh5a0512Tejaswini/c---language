#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the lengths of the three side's of a triangle:";
	cin>>a>>b>>c;
	if(a==b && b==c && c==a){
		cout<<"Equilateral";
	}
	else if(a==b||b==c||c==a){
		cout<<"Isosceles";
	}
	else{
		cout<<"Scalene";
	}
}
