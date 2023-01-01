#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
string getUserMove(){
	string move;
		cin>>move; 
	   return move;
} 
string getComputerMove(){
		srand(time(0));	
  	int n=rand()%3+1;
  	if(n==1){
  		return "rock";
	  }
	 else if(n==2){
	  	return "paper";
	  }
	 else{
	return "scissors";
	  }
}
int getResult(string umove,string cmove){
	if(umove==cmove)
	  return -1;
	else if(umove=="rock" && cmove=="paper" ||umove=="paper" && cmove=="scissors" || umove=="scissors" && cmove=="rock" )
      return 0;
	else if(umove=="rock" && cmove=="scissors" || umove=="paper" && cmove=="rock"||umove=="scissors" && cmove=="paper")
      return 1;
}
int main(){
  int noofwins=0,noofloss=0,draw=0;
  for(int i=0;i<10;i++){
  	string umove=getUserMove();
  	//cout<<"User move:"<<umove<<"\n";
  	string cmove=getComputerMove();
  	//cout<<"Computer move:"<<cmove<<"\n";
  	int var=getResult(umove,cmove); 	
  	if(var==1){
  		noofwins++;
	  }
	  else if(var==0){
	  	noofloss++;
	  }
	  else if(var==-1){
	  	draw++;
	  }
	 usleep(5000);
  }
  cout<<"\n"<<"Wins:"<<noofwins<<"\n";
   cout<<"Losses:"<<noofloss<<"\n";
    cout<<"Draws:"<<draw<<"\n";
}
