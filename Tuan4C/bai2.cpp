#include<iostream>
using namespace std;
int main(){
   string s; cin>>s;
   bool flag = true;
   for(int i=0;i<=s.length()/2;i++){
      if(s[i]!=s[s.length()-i-1]) flag=false;
   }
   if(flag) cout<<"yes";
   else cout<<"no";
}
