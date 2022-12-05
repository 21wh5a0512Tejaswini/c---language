#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cost;
	float tax=0.0,tip=0.0,total=0.0;
	cout<<"Enter meal cost:";
	cin>>cost;
	tax=(float)18/100*cost;
	tip=(float)5/100*cost;
	total=cost+tax+tip;
	cout<<tax<<" "<<tip<<" "<<total;
}
