#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int vowelcount=0,consonantcount=0;
	for(int i=0;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
	    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
     	{
	    	vowelcount++;
	    }
	    else
	    {
	    	consonantcount++;
	    }
    }
	cout<<"Vowels count is:"<<vowelcount<<" "<<"consonants count is:"<<consonantcount;
}
