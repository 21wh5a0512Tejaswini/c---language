#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter position :";
	cin>>s;
	if(s[0]=='a' || s[0]=='c' || s[0]=='e' || s[0]=='g')
	{
	  if(s[1]%2==0 )
	  {
	 	cout<<"White";
      } 
	 else
	 {
	 	cout<<"Black";
   	 } 
   }
   else if(s[0]=='b' || s[0]=='d'||s[0]=='f'||s[0]=='h')
	{
	  if(s[1]%2==0 )
	  {
	 	cout<<"Black";
      } 
	 else
	 {
	 	cout<<"White";
   	 } 
   }
   
}
