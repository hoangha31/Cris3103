#include<iostream>
using namespace std;
void in(char a[2][12]){
    for(int i=1;i<=2;i++){
    for(int j=1;j<=12;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
    char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
};
char daytab[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};

in(daytab);
cout<<endl;
in(daytab1);


}
