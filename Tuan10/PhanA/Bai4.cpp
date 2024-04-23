#include <iostream>
using namespace std;

int main(){
   int c = 0;
   int *p = &c;
   cout << *p << endl;

   delete p;

}
