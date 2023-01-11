#include<bits/stdc++.h>
using namespace std;
string IntegerAddition(string s1,string s2){
    int s1_length=s1.length();
    int s2_length=s2.length();
    int carry=0,i,j,firstdigit,seconddigit;
    string res="";
    for(i=s1_length-1,j=s2_length-1;i>=0||j>=0;i--,j--)
    {
        firstdigit=i < 0 ? 0 :s1[i]-'0';
        seconddigit=j < 0 ? 0 : s2[j]-'0';
        res=(char)((firstdigit+seconddigit+carry)%10+'0')+res;
        carry=(firstdigit+seconddigit+carry)/10;
    }
    if(carry>0)
      res=(char)(carry+'0')+res;
    return res;
}
int main(){
    string num1,num2;
    cin>>num1>>num2;
    cout<<IntegerAddition(num1,num2);
}