#include<bits/stdc++.h>
using namespace std;
string isInteger(string s){
 for(int i=0;i<s.length();i++){
 	if(isdigit(s[i])==false){
 		return "Not a Valid Integer";
	 }  
	 
 }
 return "Valid Integer";		
}
int main(){
	string num;
	cin>>num;
	cout<<isInteger(num);
}
