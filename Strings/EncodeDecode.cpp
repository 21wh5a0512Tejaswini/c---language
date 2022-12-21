#include<bits/stdc++.h>
using namespace std;
int decode(char c){
	return (int)c;
	
} 
char encode(int n){
	return (char)n;
}
int main(){
	char ch;
	int i;
	cin>>ch>>i;
	cout<<decode(ch)<<"\n";
	cout<<encode(i);
}
