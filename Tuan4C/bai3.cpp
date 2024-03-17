#include<iostream>
using namespace std;

bool check(int a){
     int tmp=a;
     int sum(0);
     while(a>0){
        int r=a%10;
        sum=sum*10+r;
        a/=10;
     }
     if(sum==tmp) return true;
     return false;
}

int main(){
   int t; cin>>t;
   while(t--){
      int a, b; cin>>a>>b;
      int dem(0);
      for(int i=a;i<=b;i++){
         if(check(i)) dem++;
      }
      cout<<dem<<endl;
   }
}
