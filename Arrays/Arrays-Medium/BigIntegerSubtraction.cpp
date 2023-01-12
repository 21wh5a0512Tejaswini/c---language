#include<bits/stdc++.h>
using namespace std;
string IntegerSubtraction(string s1,string s2){
    int s1_length=s1.length();
    int s2_length=s2.length();
    int borrow=0,i,j,firstdigit,seconddigit;
    string res="";
    for(i=s1_length-1,j=s2_length-1;i>=0||j>=0;i--,j--)
    {
        firstdigit=i < 0 ? 0 :s1[i]-'0';
        seconddigit=j < 0 ? 0 : s2[j]-'0';
        if(firstdigit+borrow<seconddigit){
            int temp=firstdigit+borrow+10-seconddigit;
            borrow=-1;
            res=(char)(temp+'0')+res;
        }
        else{
            int temp=firstdigit+borrow-seconddigit;
            borrow=0;
            res=(char)(temp+'0')+res;
        }
        }
    return res;
}
int main(){
    string num1,num2;
    cin>>num1>>num2;
    cout<<IntegerSubtraction(num1,num2);

}