#include<bits/stdc++.h>
using namespace std;
void encryptWithCeaser(string msg,int pos){
  int upper,lower;
  string result1,result2;
  for( int i=0;i<msg.length();i++){
		if(msg[i]>='A' && msg[i]<='Z'){
		upper=(msg[i]-'A'+pos)%26;
		if(upper<0){
			upper=(upper+26)%26;	
		}
		result1=upper+'A';
		cout<<result1;
	}
		else {
		    lower=(msg[i]-'a'+pos)%26;
		if(lower<0){
			lower=(lower+26)%26;	
		}
		result2=lower+'a';
		cout<<result2;
		}
	}	
	
}
int main(){
	string message;
	int shftamt;
	cin>>message>>shftamt;
	encryptWithCeaser(message,shftamt);
}
