#include<iostream>
using namespace std;
int factorial(int x){
    cout<<"x="<<x<<" at " << &x << endl;
    if(x==1||x==0){
        return 1;

    } else
      return x * factorial(x-1);
}
int main(){
   int n=5;
   cout<<factorial(n);
}
// Những giá trị của x và địa chỉ của nó được in ra liên tục và tăng dần theo số lần gọi đệ quy
//  Kichs thước của một stack frame phụ thuộc vào kiến trúc của hệ thống và cách biên dịch của trình biên dịch
