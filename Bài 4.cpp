#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int y=0;y<=n-1;y++){
        for(int x=-(n-1);x<=n-1;x++){
            if(y<=(-x+n-1)&&y<=x+n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

