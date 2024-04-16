// Loi truy nhap con tro null
#include <iostream>
using namespace std;
int main(){
    int *pX = NULL;
    cout << pX <<endl;
    cout << *pX << endl;
    *pX = 0;
    return 0;
}
