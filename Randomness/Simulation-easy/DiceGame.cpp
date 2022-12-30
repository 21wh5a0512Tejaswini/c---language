#include<bits/stdc++.h>
using namespace std;
int diceGame(){
	int count=0;
	srand(time(0));
	for(int i=1;i<=10;i++){
		int r=rand()%6+1;
		if(r==6){
			count++;
		}
	}
	return count;
	
}
int main(){
	cout<<diceGame();
}
