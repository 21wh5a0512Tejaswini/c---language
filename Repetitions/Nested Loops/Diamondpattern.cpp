#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=n-1;i>=1;i--){
		cout<<"  ";
		for(int j=1;j<=n-i-1;j++){
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"*";
		}
		cout<<"\n";			
	}	
}
