#include<bits/stdc++.h>
using namespace std;
int LengthofLongestPalindrome(string s){
 int frequency[58]={0},count=0,maxodd=0;
 bool oddfrequency=false;
 for(auto c:s){
    if(c>='a' && c<='z')
      ++frequency[c-'a'+6];
    else
      ++frequency[c-'A'];
 }
 for(int i=0;i<52;i++){
    if(frequency[i]%2==0)
       count+=frequency[i];
    else{
      oddfrequency=true;
      count+=frequency[i]-1;
    }
 }
 if(oddfrequency)
   count++;
  return count;
}
int main(){
string str="";
cin>>str;
cout<<LengthofLongestPalindrome(str);
}