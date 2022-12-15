#include<bits/stdc++.h>
using namespace std;
float getHypotenuse(float x,float y){
	 return sqrt((x*x)+(y*y));	
}
int main(){
	float side1,side2,result;
	cin>>side1>>side2;
	result=getHypotenuse(side1,side2);
	cout<<result;
}
