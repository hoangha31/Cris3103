#include <iostream>
#include <cstring>
using namespace std;

char* pad_right(const char* a, int n){
     int l = strlen(a);
     char* res = new char[n + 1];
     for (int i = 0; i < l; i++){
        res[i] = a[i];
     }
        for (int j = l; j < n ;j++){
            res[j] = ' ';
        }
    res[n] = '.';
     return res;
}

int main(){
   const char* s = "Nguyen";
   int n = 10;
   char* res = pad_right(s, n);
   cout << res;
}
