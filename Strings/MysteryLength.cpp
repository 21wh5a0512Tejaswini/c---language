#include<bits/stdc++.h>
using namespace std;
string removeMysteryLength(string s){
  int c=s.length();
  for(int i=c-1;i>=0;i--){
  	c--;
  	if(c==stoi(s.substr(i)))
  	return s.substr(0,c);
  }
  return "error";
}
int main(){
	string str;
	cin>>str;
  cout<<removeMysteryLength(str);	
}
