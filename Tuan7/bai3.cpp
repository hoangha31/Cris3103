#include <bits/stdc++.h>
using namespace std;

int count_even(int* a, int n){
    int cnt(0);
     for(int i= 0; i < n; i++){
         if(a[i] % 2 == 0){
            cnt++;
         }
     }
     return cnt;
}

int main(){
   int a[] = {1,2,3,4,5,6,7,8,9,10};

   int cnt = count_even(a,5);
   cout << cnt << endl;

   int cnt1 = count_even(a+5,5);
   cout << cnt1 << endl;
}
