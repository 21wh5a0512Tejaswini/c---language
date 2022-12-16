#include<bits/stdc++.h>
using namespace std;
bool isCollinear(float a1,float a2,float b1,float b2,float c1,float c2){
	float slope1=(b2-a2)/(b1-a1);
	float slope2=(c2-b2)/(c1-b1);
	float slope3=(a2-c2)/(a1-c1);
	if(slope1==slope2 && slope2==slope3 && slope1==slope3)
		return true;
	else
	    return false; 
}
int main(){
	float x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if(isCollinear(x1,y1,x2,y2,x3,y3))
	 cout<<"True";
	else
	 cout<<"False";
}
