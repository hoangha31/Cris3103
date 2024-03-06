#include<bits/stdc++.h>
using namespace std;
string doc3so(int n){
    static const string a[]={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    static const string b[]= {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    static const string c[]= { "","", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
   string res;
   if(n>=100){
       res+=a[n/100]+" hundred ";
       n%=100;
   }
   if(n>=20){
       res+=c[n/10]+" ";
       n%=10;
   }
   if(n>=10){
       res+=b[n-10]+" ";
       n%=10;
   }
   if(n>0){
       res+=a[n]+" ";
   }
   return res;
}
string docso(int n){
    if(n==0) return " zero ";
    if(n<0){
        return "negative " + docso(-n);
    }
    string res;
    if(n>=1000000){
        res+=doc3so(n/1000000)+" million ";
        n%=1000000;
    }
    if(n>=1000){
        res+=doc3so(n/1000)+" thousand "+" ";
        n%=1000;
    }
    if(n>0){
        res+=doc3so(n)+" ";
    }
    return res;
}
int main(){
    int n; cin>>n;
    string kq=docso(n);
    cout<<kq;
}
