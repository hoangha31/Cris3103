#include <bits/stdc++.h>
using namespace std;

 struct Point {
    int x,y;
 };

 int main(){
     Point* p = new Point;
     p->x = 10;
     (*p).y = 20;
     cout << p->x << " " << p->y;

     delete p;
 }
