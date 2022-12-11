#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	float f,c;
	cout<<"Temparature in C"<<" "<<"Temaparature in F"<<"\n";
	for(i=00;i<=100;i++)
	{
		if(i%10==0)
		{
			c=i;
			f=i*9/5+32;
			cout<<"  "<<i<<"C"<<"                 "<<"  "<<fixed<<setprecision(1)<<f<<"F"<<"\n";
		}
	}
}
