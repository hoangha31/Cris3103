#include <iostream>
using namespace std;

int main(){
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p;
     *p2 = 100; // Loi truy nhap bo nho da duoc giai phong
      cout << *p2;
     delete p2; // loi giai phong bo nho da duoc giai phong

}
