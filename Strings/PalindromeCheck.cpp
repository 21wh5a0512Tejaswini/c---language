#include<bits/stdc++.h>
using namespace std;
void isPalindrome(string str){
	string res=str;
	reverse(str.begin(),str.end());
	if(res==str){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not a Palindrome";
	}
	
}
int main(){
	string s;
	cin>>s;
	isPalindrome(s);
}
