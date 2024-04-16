#include <bits/stdc++.h>
using namespace std;
int  binarySearch(int *a, int n, int x){
    int l = 0, r = n - 1;

    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] == x){
            return  m;
        } else if(a[m] < x){
             l = m - 1;
        } else if (a[m] > x){
             r = m + 1;
        } else {
           return -1;
        }
    }
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};

    int n = binarySearch(a,9,7);
    cout << n;
}
