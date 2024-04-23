#include <iostream>
#include <cstring>
using namespace std;

char* pad_left(const char* a, int n){
      int l = strlen(a);
      char* res = new char[n+1];
      for(int i = 0; i < n ; i++){
         res[n - l + i] = a[i];
      }
      for(int j = 0; j < n - l; j++){
        res[j] = ' ';
      }
      return res;
}

int main(){
   const char* s = "Hello";
   int n = 10;
   char* res = pad_left(s,n);
   cout << res;
}
