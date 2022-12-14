#include<bits/stdc++.h>
using namespace std;
int main()
{

	string result;
	int q,r;
	cin>>q;
	while(q>0){
		r=q%2;
		result=result+to_string(r);
		q=q/2;		
	}
	for(int i=result.length()-1;i>=0;i--){
		cout<<result[i];
	}
	
}
