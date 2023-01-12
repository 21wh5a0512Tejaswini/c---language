#include<bits/stdc++.h>
using namespace std;
string IntegerMultiplication(string s1,string s2){
    int s1_length=s1.length();
    int s2_length=s2.length();
    int ans[s1_length+s2_length]={0};
    for(int i=s2_length-1;i>=0;i--){
        for(int j=s1_length-1;j>=0;j--){
            int product=(s2[i]-'0')*(s1[j]-'0');
            int sum=product+ans[i+j+1];
            ans[i+j+1]=sum%10;
            ans[i+j]+=sum/10;

        }
    }
    string res="";
    for(auto x:ans){
        res+=to_string(x);
    }
    return res;
}
int main(){
    string num1,num2;
    cin>>num1>>num2;
    cout<<IntegerMultiplication(num1,num2);

}