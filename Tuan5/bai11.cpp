#include<bits/stdc++.h>
using namespace std;

void doiCoSo(int n){
    string binary="";

    while(n>0){
        int  r=n%2;
        binary=to_string(r)+binary;
    }
    reverse(binary.begin(), binary.end());
    cout<<binary;
}

void doicoso2(string n){
   int res=0;
   int power=0;
   for(int i=n.size();i>0;i--){
    if(n[i]=='1'){
        res+=pow(2,power);
    }
    ++power;
   }
   cout<<res;
}
int main(){
    int n;
    cin>>n;
    doiCoSo(n);
    string s; cin>>s;
    doicoso2(s);
}
