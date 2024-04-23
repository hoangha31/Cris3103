#include <iostream>
#include <cstring>
using namespace std;

char* reverse (const char* a){
     int n = strlen(a);
     char* res = new char[n + 1];
     res[n] = '\0';
     for(int i = 0; i < n; i++){
        res[n-1-i] = a[i];
     }
     return res;
}

int main(){
    const char* s = "Hello";
    char* res = reverse(s);
    cout << res << endl;
}
