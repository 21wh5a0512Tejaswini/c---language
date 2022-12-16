#include<bits/stdc++.h>
using namespace std;
bool checkPassword(string s){
int  a=0,b=0,c=0,d=0;
	if(s.length()>=8){
		a=1;
	}
	else{
		return false;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]>='A' && s[i]<='Z'){
			b=1;
		}
		if(s[i]>='a' && s[i]<='z'){
			c=1;
		}
		if(s[i]>='0' && s[i]<='9'){
			d=1;
		}
	}
	if(a&&b&&c&&d){
		return true;
	}
	else
	{
		return false;
	}
	
}
int main(){
	string password;
	cin>>password;
	if(checkPassword(password)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}
