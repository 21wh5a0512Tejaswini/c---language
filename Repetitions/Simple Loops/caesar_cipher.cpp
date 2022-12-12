#include<bits/stdc++.h>
using namespace std;
int main()
{
	string message,result,result1;
	int upper,lower;
	int i,shftamt;
	cin>>message>>shftamt;
	for( i=0;i<message.length();i++){
		if(message[i]>='A' && message[i]<='Z'){
		upper=(message[i]-'A'+shftamt)%26;
		if(upper<0){
			upper=(upper+26)%26;	
		}
		result=upper+'A';
		cout<<result;
	}
		else {
		    lower=(message[i]-'a'+shftamt)%26;
		if(lower<0){
			lower=(lower+26)%26;	
		}
		result1=lower+'a';
		cout<<result1;
		}
	}
}

	
	

