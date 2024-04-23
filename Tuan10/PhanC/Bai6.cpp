#include <iostream>
#include <cstring>
using namespace std;

char* trim_left(const char* a){
   int l = strlen(a);
   int j = 0;
   while ( j < l && a[j] == ' '){
      j++;
   }
   char* res = new char[l - j + 1];
   for(int i = 0 ; i < l - j +1; i++){
    res[i] = a[j+i];
   }
   return res;
}

int  main(){
    const char* s = "     Cristiano";
    char* res = trim_left(s);
    cout << res;
}
