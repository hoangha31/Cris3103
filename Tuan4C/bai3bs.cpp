#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; cin>>n;
   int cnt1(0), cnt2(0), cnt3(0), cnt4(0), cnt5(0), cnt6(0), cnt7(0), cnt8(0), cnt9(0);
   while(n--){
    int x; cin>>x;
    if(x==1) cnt1++;
    else if(x==2) cnt2++;
    else if(x==3) cnt3++;
    else if(x==4) cnt4++;
    else if(x==5) cnt5++;
    else if(x==6) cnt6++;
    else if(x==7) cnt7++;
    else if(x==8) cnt8++;
    else if(x==9) cnt9++;
   }
   cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<" "<<cnt5<<" "<<cnt6<<" "<<cnt7<<" "<<cnt8<<" "<<cnt9;

}
