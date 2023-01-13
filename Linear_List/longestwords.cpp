#include<bits/stdc++.h>
using namespace std;
list<string> longestWords(vector<string>inp){
	list<string> res;
	unsigned maxlen=0;
	for(auto s:inp){
		if(s.length()>maxlen){
			maxlen=s.length();
			res.clear();
			res.push_back(s);	
		}
		else if(s.length()==maxlen){
			res.push_back(s);
		}
	}
	return res;
}
int main(){
	vector<string> v{"vector","list","string","cpp","java"};
	list<string> ans=longestWords(v);
	for(auto x:ans){
		cout<<x<<endl;
	}
	
}
