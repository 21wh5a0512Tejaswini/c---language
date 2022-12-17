#include<bits/stdc++.h>
using namespace std;
int medianOfThree(int n1,int n2,int n3){
	if(n1>n2 && n1>n3)
	  if(n2>n3)
    	  return n2;
    	else 
    	  return n3;
	else if(n2>n1 && n2>n3)
	  if(n3>n1)
	     return n3;
	 else
	     return n1;
	else
	  if(n1>n2)
	    return n1;
	  else
		return n2;	    	
}
int main(){
	int a,b,c,result;
	cin>>a>>b>>c;
	cout<<medianOfThree(a,b,c);
	//cout<<result;
}
