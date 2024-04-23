#include <iostream>
#include <cstring>
using namespace std;

char* delete_char(const char* a, char c){
   int n = strlen(a);
   char* res = new char[n+1];
   int j = 0;

   for(int i = 0; i < n; i++){
      if (a[i] != c){
        res[j] = a[i];
        j++;
      }
   }

   return res;
}

int main(){
   const char* s = "hello";
   char c = 'e';
   char* res = delete_char(s,c);
   cout << res;
}
