#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int m,n;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
string a[100][100];

int main(){
   cin>>m>>n;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]=="."){
                int count=0;
            for(int v=0;v<8;v++){
                    int r1=i+dx[v];
                    int r2=j+dy[v];
                    if(r1>=0 && r1<m && r2>=0 && r2<n){
                       if(a[r1][r2]=="*") count++;
                    }
            }
            a[i][j]= to_string(count);
         }
     }
  }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

}
