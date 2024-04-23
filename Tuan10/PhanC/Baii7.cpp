#include <iostream>
#include <cstring>
using namespace std;
char* trim_right(const char* a){
     int l = strlen(a);
     int j = 0;
     while( j < l && a[j] != ' '){
        j ++;
     }
     char* res = new char[j+1];
     for(int i = 0; i < j; i++){
        res[i] = a[i];
     }
     return res;
}
int main(){
    const char* s = "Hello      ";
    char* res = trim_right(s);
    cout <<res;
}
