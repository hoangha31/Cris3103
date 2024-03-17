#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int n; cin>>n;
    int  num=1;
    int i=0, j=n/2;
    while(num<=n*n){
        a[i][j]=num;
    num++;
        int i1=(i-1+n)%n;
        int j1=(j+1)%n;
        if(a[i1][j1]!=0){
            i++;
        } else {
            i=i1;
            j=j1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
