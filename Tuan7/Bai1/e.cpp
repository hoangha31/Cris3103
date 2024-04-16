// Loi truy nhap toi vung nho khong hopk le
#include <iostream>
using namespace std;

int * weird_sum(int a, int b){
    int c;
    c = a + b;
    return &c;
}

int main(){
    int a, b; cin >> a >> b;
    int *p = weird_sum(a,b);
    cout << p;

}
