#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if (c%2==0){
            if(a>b){
                cout<<"First"<<endl;
            }else{
                cout<<"Second"<<endl;
            }
        }else{
            a+=((c/2)+1);
            b+=(c/2);
            if(a>b){
                cout<<"First"<<endl;
            }else{
                cout<<"Second"<<endl;
            }
        }
    }
    return 0;
}