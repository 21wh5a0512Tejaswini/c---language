#include<bits/stdc++.h>
using namespace std;
float getHypotenuse(float x,float y){
	 cout<<sqrt((x*x)+(y*y));	
}
int main(){
	float side1,side2;
	cin>>side1>>side2;
	getHypotenuse(side1,side2);
}
