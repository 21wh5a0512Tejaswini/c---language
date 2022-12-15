#include<bits/stdc++.h>
using namespace std;
bool isValidTriangle(int x,int y,int z){
	if(x<=0 || y<=0||z<=0){
		return false;
	}
	else if(x>=(y+z) || y>=(x+z) || z>=(x+y)) {
		return false;
	}
	else{
		return true;;
	}
}
int main(){
 int side1,side2,side3;
 cin>>side1>>side2>>side3;
 if(isValidTriangle(side1,side2,side3)){
 	cout<<"True";
 }	
 else{
 	cout<<"False";
 }
}
