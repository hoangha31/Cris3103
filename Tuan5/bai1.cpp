#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> drawBoard(int m, int n , int k){
      vector<vector<char>> field(m,vector<char>(n,'0'));
      for(int i=0;i<k;i++){
           int x= rand() % m;
           int y= rand() % n;
           if(field[x][y] == '0'){
              field[x][y] = '*';
           }
      }
      return field;
}

void print(const vector<vector<char>>& field){
     for(auto &row:field){
        for(auto &cell  : row){
            cout<<cell<<" ";
        }
        cout<<endl;
     }
}

int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};
char countMine(int x, int y, vector<vector<char>>& field, int m, int n){
     int cnt(0);
     for(int i=0;i<8;i++){
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if(new_x>=0&&new_y<m&&new_x>=0&&new_x<n&&field[new_x][new_y]=='*'){
            cnt++;
        }
     }
     char res=cnt+'0';
     return res;
}

bool Reveal(int x, int y, vector<vector<char>>&field, vector<vector<char>>&reveal,int m, int n){
    if(field[x][y] == '*'){
        cout<<"YOU'RE DEAD!"<<endl;
        for(int i=0;i<field.size();i++){
            for(int j=0;j<field[0].size();j++){
                if(field[x][y]=='*'){
                    reveal[x][y]='*';
                }
            }
        }
        print(reveal);
        return false;;
    } else {
       reveal[x][y] = countMine(x,y,field,m,n);
       print(reveal);
       return true;
    }
}

int main(){
    int m, n, k;
    cin>>m>>n>>k;
    srand(time(0));
    vector<vector<char>> Board= drawBoard(m ,n ,k);
    vector<vector<char>> reveal(m,vector<char>(n,'-'));
    print(Board);
    while (true){
        int x,y; cin>>x>>y;
        if(x<0||x>m||y<0||y>n){
            cout<<"Try again!";
            break;
        }
        if(!Reveal(x,y,Board,reveal,m,n)){
            break;
        }
    }
    return 0;
}
