#include<iostream>
using namespace std;
 int main(){
     int x;
   int a[6]={1,2,3,4,5,6};
   char y;
   char b[6] = {'a','b','c','d','e','f'};
     int z;

   for(int i=0;i<3;i++){
    cout<<"Dia chi cua phan tu a["<<i<<"]: "<<&a[i]<<endl;
   }
  // các địa chỉ của các phần tử trong mảng a cách nhau 4 byte
   for(int i=0;i<3;i++){
    cout << "Dia chi cua phan tu b[" << i << "]: " <<(void *) &b[i] << endl;
    }
    // Ccacs kiểu dữ liệu của các phần tử liên tiếp của mảng b thường liên tục nhau , vì kiểu đữ liệu chả thường chiếm q byte trong bộ nhớ
    cout << "Dia chi cua bien truoc mang a: " << &x << endl;
    // Các biến trước và sau mảng a có thể nằm ở bất kỳ địa chỉ nào trong bộ nhớ
    cout << "Dia chi cua bien sau mang a: " << &z << endl;
    cout << "Dia chi cua bien truoc mang b: " << (void *)&y << endl;
     //Biến trước mảng b thường có địa chỉ liền trước địa chỉ của phần tử đầu tiên của mảng b trong bộ nhớ.
   }

