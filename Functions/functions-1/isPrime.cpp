#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
	int count=0;
	for(int i=1;i<=x;i++){
		if((x%i)==0){
		 count++;	
		}
	}
	if(count==2){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int num;
	cin>>num;
	if(isPrime(num)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	
}
