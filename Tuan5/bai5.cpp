#include<bits/stdc++.h>
using namespace std;

bool check(int n){
   if(n==2) return true;
   for(int i=2;i<=sqrt(n);i++){
      if(n%i==0) return false;
   }
   return true;
}

void in(int n){
   if(check(n)){
    cout<<"1"<<endl;
   } else cout<<"0"<<endl;
}

int main(){
   int n; cin>>n;
   for(int i=2;i<=n;i++){
      cout<<i<<" ";
     in(i);
   }
}
