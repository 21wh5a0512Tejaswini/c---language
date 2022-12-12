#include<bits/stdc++.h>
using namespace std;
int main()
{
	float x,Th;
	cin>>x;
	float guess=x/2;
	Th=pow(10,-3);
	while(abs(guess*guess)-x>=Th){
		guess=(guess+(x/guess))/2;
	}
	cout<<guess;
}
