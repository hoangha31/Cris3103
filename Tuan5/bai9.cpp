#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int sinhSo(int n){
    srand(time(0));
    return rand()%n;
}

int main(){
   int n; cin>>n;
   int res=sinhSo(n);
   cout<<res;
}
