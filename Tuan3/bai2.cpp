#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};


void nhap1(Point a){
    cin>>a.x>>a.y;
}

void in(Point a){
    cout<<a.x<<" "<<a.y;
}

int main(){
    Point a;
    nhap1(a); in(a);
}
