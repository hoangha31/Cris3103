#include <iostream>
using namespace std;
void passByValue(int n){
    cout<<&n<<endl;
}
void passByReference(int &x){
    cout<<&x<<endl;
}
int  main(){
    int n=10;
    cout<<&n<<endl;
    passByReference(n);
    passByValue(n);
    return 0;
}
// Địa chỉ của tham số  trong hàm passByReference sẽ trùng với địa chỉ của biến n
 // Địa chỉ của biến n sẽ khác với địa chỉ của tham số n trong hàm pass by value_type
