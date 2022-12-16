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
int nextPrime(int x){
	while(true){
		x=x+1;
		if(isPrime(x))
		  return x;
	}
}
  
int main()
{
	int num,result;
	cin>>num;
	result=nextPrime(num);
	cout<<result;
}
