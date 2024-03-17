#include<bits/stdc++.h>
using namespace std;
int res(int i,int j){
    if(i==j||j==0){
        return 1;
    }
     else return res(i-1,j-1)+res(i-1,j);
}

int main(){
  int n; cin>>n;
  for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
    cout<<setw(4)<<res(i,j);
  }
  cout<<endl;
  }

}
