#include<bits/stdc++.h>
using namespace std;
string randomPassword(){
   string pwd="";
   srand(time(0));
   int length=rand()%4+7;
   for(int i=0;i<length;i++){
   	char c=rand()%94+33;
   	pwd+=c;
   }
   return pwd;		
}
int main(){
	cout<<randomPassword();
}
	 

