#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i<=n-j||i<=j-n) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
}

