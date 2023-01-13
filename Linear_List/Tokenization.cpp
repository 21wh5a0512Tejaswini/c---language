#include<bits/stdc++.h>
using namespace std;
list<string> tokenize(string s){
   list<string>res;
    string temp="";
    for(int i=0;i<s.length();i++){ 
        if(isdigit(s[i])){
            temp+=s[i];
            if(!isdigit(s[i+1])){
            res.push_back(temp);
            temp="";
            }
        }
        else{
            string temp1="";
            temp1+=s[i];
            res.push_back(temp1);
            temp1="";
        }
    }
    return res;
}
int main(){
    string str;
    cin>>str;
    list<string> data=tokenize(str);
    cout<<"[";
	for(auto x: data){
		cout<<"''"<<x<<"''"<<","<<" ";
  }
  cout<<"]";
}