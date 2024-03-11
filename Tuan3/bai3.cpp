#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};

void nhap(Point &a){
    cin>>a.x>>a.y;
}

Point mid_point(Point &a, Point &b){
    Point k;
    k.x=(a.x+b.x)/2;
    k.y=(a.y+b.y)/2;
    return k;
}

void in(Point a){
    cout<<a.x<<" "<<a.y;
}

int main(){
    Point a; Point b;
    nhap(a);
    nhap(b);
    Point res=mid_point(a,b);
    in(res);
}
