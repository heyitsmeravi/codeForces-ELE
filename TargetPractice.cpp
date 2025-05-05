#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        vector<vector<char>>board(10,vector<char>(10));
        for (int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>board[i][j];
            }
        }
        int score=0;
        for (int i=0;i<10;i++){
            for (int j=0;j<10;j++){
                if ((i==0 || i==9 || j==0 || j==9)&& board[i][j]=='X'){
                    score+=1;
                }else if ( ((i==1 || i==8 && j>0 && j<9) || (j==1 || j==8 && j>0 && j<9)) && board[i][j]=='X'){
                    score+=2;
                }else if(((i==2 || i==7 && j>1 && j<8) || (j==2 || j==7 && j>1 && j<8)) && board[i][j]=='X'){
                    score+=3;
                }else if (((i==3 || i==6 && j>2 && j<7) || (j==3 || j==6 && j>2 && j<7)) && board[i][j]=='X'){
                    score+=4;
                }else if(((i==4 || i==5 && j>3 && j<7) || (j==2 || j==7 && j>3 && j<6)) && board[i][j]=='X'){
                    score+=5;
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}