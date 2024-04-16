#include <bits/stdc++.h>
using namespace std;


void f(int *arr, int size){
   cout << size << endl;
}
int main(){
    int A[] = {1,2,3,4,5,6,7};
    int k = sizeof(A) / sizeof(A[0]);

    cout << k << endl;
    f(A,k);
}
