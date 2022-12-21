#include<bits/stdc++.h>
using namespace std;
double approximatePI(int n){
	double result=0, sign=1,d=2;
	for(int i=1;i<=n;i++){
		result+=((1/(d*(d+1)*(d+2))))*sign;
		d+=2;
		sign*=-1;
	}
	return (result*4)+3;
	
}
int main(){
	int approximations;
	cin>>approximations;
	cout<<approximatePI(approximations);
}
