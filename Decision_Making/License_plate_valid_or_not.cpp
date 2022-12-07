#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string of characters:";
	cin>>s;
    if(s.length()==6)
	{
    if(s[0]>='A' && s[0]<='Z' && s[1]>='A' && s[1]<='Z' && s[2]>='A' && s[2]<='Z'
	  && s[3]>='0' && s[3]<='9' && s[4]>='0' && s[4]<='9' && s[5]>='0' && s[5]<='9')
	   {
    		cout<<"Valid for Older style";
	   }
	else if(s[0]>='0' && s[0]<='9' && s[1]>='0' && s[1]<='9' && s[2]>='0' && s[2]<='9' 
	   && s[3]>='A' && s[3]<='Z' && s[4]>='A' && s[4]<='Z' && s[5]>='A' && s[5]<='Z')
	{
		cout<<"Valid for newer style";
	}
	else{
		cout<<"Not valid for either style of license plate";
	}
	
}
	else{
		cout<<"Not valid for either style of license plate";
	}
}
