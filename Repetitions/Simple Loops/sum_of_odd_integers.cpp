#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n+n;i++)
	{
		if(i%2!=0){
			sum+=i;
		}
	}
	cout<<sum;
}
