#include<bits/stdc++.h>
using namespace std;
int main()
{
	int result[1000],r,q,i=0;
	cin>>q;
	while(q!=0){
		result[i]=q%2;
		q=q/2;
		i++;		
	}
	for(int j=i-1;j>=0;j--){
	cout<<result[j];	
	}
	
}
