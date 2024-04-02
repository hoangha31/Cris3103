#include<iostream>
using namespace std;
int ucln(int a, int b){
    if(a%b==0) return b;
    else return ucln(b,a%b);
}

bool ntocc(int a,int b){
   if(ucln(a,b)==1) return true;
   return false;
}
int main(){
   int a,b; cin>>a>>b;
   if(ntocc(a,b)) cout<<"yes";
   else cout<<"no";
}

