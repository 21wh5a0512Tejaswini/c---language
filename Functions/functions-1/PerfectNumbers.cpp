#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int num){
	int sum=0;
	for(int i=1;i<num;i++){
		if(num%i==0)
		  sum+=i;	
	}
	if(sum==num)
	 return true;
	else
	 return false;
}
int main(){
  int n,j;
  cin>>n;
  if(isPerfect(n))
  	cout<<"True"<<"\n";
  else
  	cout<<"False"<<"\n";
  for(j=1;j<=10000;j++){
  		if(isPerfect(j))
  		 cout<<j<<" ";
	  }
  
}
