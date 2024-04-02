#include<iostream>
using namespace std;

int main(){
    int a=5;
    int &ref_a=a;

    cout<<&a<<endl;
    cout<<&ref_a<<endl;

    if(&a==&ref_a){
         cout<<"yes"<<endl;
    } else cout<<"no"<<endl;

    ref_a=100;
    cout<<a<<endl;

    int c=99;
    ref_a=c;
    cout<<a;
}
