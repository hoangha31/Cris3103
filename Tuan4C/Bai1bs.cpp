#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<double>vt;
    double n;
    while(n>0){
            cin>>n;
        vt.push_back(n);
    }
    if(!vt.empty()){
    int l=vt.size();
    double sum(0);
    for(int i=0;i<l;i++){
        sum+=vt[i];
    }
    double tb=sum/l;
    double sum1(0);
    for(int i=0;i<l;i++){
        sum1+=(vt[i]-tb)*(vt[i]-tb);
    }
    cout<<tb<<" " <<sum1/l;
    }
}
