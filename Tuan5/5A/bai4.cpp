#include<iostream>
using namespace std;

void doiMang(int a[], int n){
   for(int i=0;i<n;i++){
    a[i]*=2;
   }
}

void doiChuoi(string &s){
   s+="hello kkk";
}

int main(){
   int a[]={1,2,3,4,5};
   string s="Nguyen Ha";
   for(int i=0;i<5;i++) cout<<a[i]<<" ";
   cout<<endl;
   cout<<s<<endl;
   doiMang(a,5);
   doiChuoi(s);
   for(int i=0;i<5;i++) cout<<a[i]<<" ";
   cout<<endl;
   cout<<s;
}
// cả hai dều đuọc truyền bằng tham chiếu
