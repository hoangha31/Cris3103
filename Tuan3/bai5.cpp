#include<bits/stdc++.h>
using namespace std;

struct Point{
   int x,y;
};

void nhap1(Point &b){
  cin>>b.x>>b.y;
}

struct Rect{
    int x,y,w,h;
    bool contains(const Point &a){
         return (a.x>=x&&a.x<=x+w&&a.y>=y&&a.y<=y+h);
    }
};

bool contains(const Point &a, Rect &b){
         return (a.x >= b.x && a.x <= b.x + b.w && a.y >= b.y && a.y <= b.y + b.h);
    }

void nhap(Rect &a){
    cin>>a.x>>a.y>>a.w>>a.h;
}


int main(){
    Rect x;
    nhap(x);
    Point b; nhap1(b);
    if(contains(b,x)) cout<<"yes";
    else cout<<"no";
}

