#include<bits/stdc++.h>
using namespace std;
int main()
{
	string message,upper,lower;
	int i,shftamt;
	cin>>message>>shftamt;
	for( i=0;i<message.length();i++){
		if(message[i]>='A' && message[i]<='Z'){
		upper=(message[i]-'A'+shftamt)%26+'A';
		cout<<upper;
	}
		else {
			lower=(message[i]-'a'+shftamt)%26+'a';
		    cout<<lower;
		}
	}
}

	
	

