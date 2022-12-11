#include<bits/stdc++.h>
using namespace std;
int main()
{
	string bin;
	cin>>bin;
	int num;
	num = stoi(bin);
	int dec=0,i=0,rem=0;
	while(num!=0){
		rem=num% 10;
		num=num/10;
		dec+=rem*pow(2,i);
		i++;
	}
	cout<<dec;
}
