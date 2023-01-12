#include<bits/stdc++.h>
using namespace std;
string sum(string first,string second){
	string res="";
	int firstlen=first.length();
	int secondlen=second.length();
	int i,j,carry=0;
	for(i=firstlen-1,j=secondlen-1;i>=0||j>=0;i--,j--){
		int firstdigit=i<0?0:first[i]-'0';
		int seconddigit=j<0?0:second[i]-'0';
		res=(char)((firstdigit+seconddigit)%10 + '0' ) + res;
		carry=(firstdigit+seconddigit+carry)/10;
	}
	if(carry>0)
	  res=(char)(carry+'0')+res; 
	return res;
}
int main(){
	string str1,str2;
	cin>>str1>>str2;
	cout<<sum(str1,str2);	
}
