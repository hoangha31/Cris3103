#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int main(){
    int x, y; cin>>x>>y;
    int num=1;
    int t=0; int b=x-1; int l=0; int r=y-1;
    while(t<=b&&l<=r){
        for(int i=l;i<=r;i++){
            a[t][i]=num;
            num++;
        }
        for(int i=t+1;i<=b;i++){
            a[i][r]=num;
            num++;
        }
        for(int i=r-1;i>=l;i--){
            a[b][i]=num;
            num++;
        }
        for(int i=b-1;i>=t+1;i--){
            a[i][l]=num;
            num++;
        }
        t++; b--;
        l++; r--;

    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



}
