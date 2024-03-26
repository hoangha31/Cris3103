#include<iostream>
using namespace std;
char a[]="abcd";
int main(){
   char b[]="abcde";
   int s1=sizeof(a);

   int s2=sizeof(b);
   cout<<s1<<" "<<s2;
}
