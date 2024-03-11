#include<bits/stdc++.h>
using namespace std;

struct Rect{
    int x,y,w,h;
};

void nhap(Rect &s){
  cin>>s.x>>s.y>>s.w>>s.h;
}

void in(Rect s){
    cout<<s.x<<" "<<s.y<<" "<<s.w<<" "<<s.h;
}

struct ship{
   string id;
   Rect t;
   int dx, dy;
   void move(){
       t.x+=dx;
       t.y+=dy;
   }
};

void nhap1(ship &k){
  cin>>k.id;
  nhap(k.t);
  cin>>k.dx>>k.dy;
}
void display(const ship& s){
   cout<<s.id<<endl;
   in(s.t);
}

int main(){
    ship ship1; ship ship2;
    nhap1(ship1); nhap1(ship2);
    int loop=0;
    while (loop < 10) {
    ship1.move(); ship2.move();
    display(ship1); display(ship2);
    loop++;
    }

}
