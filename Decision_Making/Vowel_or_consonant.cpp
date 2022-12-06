#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	cout<<"Enter a letter of an alphabet:";
	cin>>c;
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
		cout<<"Vowel";
	}
	else if(c=='y'||c=='Y'){
		cout<<"Sometimes y is a vowel,and sometimes y is a consonant";
	}
	else{
		cout<<"Consonant";
	}
}
