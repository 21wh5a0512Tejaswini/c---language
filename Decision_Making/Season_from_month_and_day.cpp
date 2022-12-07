#include<bits/stdc++.h>
using namespace std;
int main()
{
	string month;
	int day;
	cin>>month>>day;
	if(month=="January" || month=="Febrauary" || month=="December" && day>21 || month=="March" && day<=20)
	{
		cout<<"Spring";
	}
	
	else if(month=="April" || month=="May" || month=="March" && day>20 || month=="June" && day<=21)
	{
		cout<<"Summer";
	}
	
	else if(month=="July" || month=="August" || month=="June" && day>21 || month=="September" && day<=22)
	{
		cout<<"Fall";
	}
	
	else
	{
		cout<<"Winter";
	}
}
