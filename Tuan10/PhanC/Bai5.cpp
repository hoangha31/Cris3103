#include <iostream>
#include <cstring>
using namespace std;

char* truncate(const char* a, int n){
      //int l = strlen(a);
      char* res = new char[n+1];
      for (int i = 0 ; i < n ; i++){
        res[i] = a[i];
      }
      return res;
}

int main(){
   const char* s = "Ronaldo";
   int n = 3;
   char* res  = truncate(s,n);
   cout <<res;
}
