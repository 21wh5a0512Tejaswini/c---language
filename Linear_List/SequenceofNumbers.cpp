#include<bits/stdc++.h>
using namespace std;
list<int> getSeq(){
    list<int> l;
	int n;
	while(true){
		cin>>n;
		if(n==0)
     break;
		l.push_back(n);
	}
	return l;
}
int main()
{
  list<int> data=getSeq();
	for(auto x: data){
		cout<<x<<endl;
  }
}