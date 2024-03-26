#include<bits/stdc++.h>
using namespace std;

int pascal(int i, int j){
  if(i==j||j==0)
    return 1;
    else return pascal(i-1,j-1)+ pascal(i-1,j);
}

void in(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<pascal(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
   int n; cin>>n;
   in(n);
}
