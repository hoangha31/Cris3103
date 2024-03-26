#include<bits/stdc++.h>
using namespace std;

void sort1(int a[]){
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
}
int main(){
    int a[30];
    srand(time(NULL));
    for(int i=0;i<30;i++){
        a[i]=rand()%100+1;
    }
    sort1(a);
    for(int i:a) cout<<i<<" ";

}
