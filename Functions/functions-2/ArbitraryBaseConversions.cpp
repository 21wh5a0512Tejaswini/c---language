#include<bits/stdc++.h>
using namespace std;
int convertDec(string n,int sourcebase){
 int dec=0,i=0,rem=0;
 int num=stoi(n);
	while(num!=0){
		rem=num%10;
		num=num/10;
		dec+=rem*pow(sourcebase,i);
		i++;
	}
	return dec;
}
string convertBase(string n,int sbase,int targetbase){
	int rem;
	int sol=convertDec(n,sbase);
	string result;
	while(sol>0){
		rem=sol%targetbase;
		if(rem>9){
			rem=(char)rem-10+'A';
			result+=rem;
		}
		else{
			result=result+to_string(rem);
		}
		
		sol=sol/targetbase;		
	}
	 reverse(result.begin(), result.end());
	return result;
}
int main(){
	string inputnum;
	int srcbase,tgtbase;
	cin>>inputnum>>srcbase>>tgtbase;
	if(srcbase>=2 && srcbase<=16 && tgtbase>=2 && tgtbase<=16){
	cout<<convertBase(inputnum,srcbase,tgtbase);
	}
	else{
	    cout<<"Not possible!!";
	}
}
