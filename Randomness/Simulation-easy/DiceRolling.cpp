#include<bits/stdc++.h>
using namespace std;
string rollDice(){
	srand(time(0));
	int r1=rand()%6+1;
	int r2=rand()%6+1;
	int r3=rand()%6+1;
	int r4=rand()%6+1;
	int r5=rand()%6+1;
	if(r1==r2 && r2==r3 && r3==r4 && r4==r5){
		return "Yahoo";
	}
	else{
		return "Try again";
	}
	
}
int main()
{
	cout<<rollDice();
}
