#include<iostream>
using namespace std;
int a[]={1,2,3,4};
int main(){
   int b[]={3,4,5,6,7};
   for(int i:a) cout<<i<<" ";
   cout<<endl;
   for(int i:b) cout<<i<<" ";
}
