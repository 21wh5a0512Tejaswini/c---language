#include<bits/stdc++.h>
using namespace std;
int main()
{
	string month;
	int day;
	cin>>month>>day;
	if(month=="Decemeber" && day>=22 || month=="January" && day<=19)
	{
		cout<<"Capricon";
	}
	else if(month=="January" && day>=20 || month=="Febrauary" && day<=18)
	{
		cout<<"Aquarius";
	}
	else if(month=="Febrauary" && day>=19 || month=="March" && day<=20)
	{
		cout<<"Pisces";
	}
	else if(month=="March" && day>=21 || month=="April" && day<=19)
	{
		cout<<"Aries";
	}
	else if(month=="April" && day>=20 || month=="May" && day<=20)
	{
		cout<<"Taurus";
	}
	else if(month=="May" && day>=21 || month=="June" && day<=20)
	{
		cout<<"Gemini";
	}
	else if(month=="June" && day>=21 || month=="July" && day<=22)
	{
		cout<<"Cancer";
	}
	else if(month=="July" && day>=23 || month=="August" && day<=22)
	{
		cout<<"Leo";
	}
	else if(month=="August" && day>=23 || month=="September" && day<=22)
	{
		cout<<"Virgo";
	}
	else if(month=="September" && day>=23 || month=="October" && day<=22)
	{
		cout<<"Libra";
	}
	else if(month=="October" && day>=23 || month=="November" && day<=21)
	{
		cout<<"Scorpio";
	}
	else 
	{
		cout<<"Sagittaurius";
	}
	
}
