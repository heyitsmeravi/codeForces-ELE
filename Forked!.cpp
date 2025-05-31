#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int dx[4]={-1,1,-1,1};
int dy[4]={-1,-1,1,1};
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        set<pair<int,int>> kinghits, queenhits;
        for (int j=0;j<4;j++){
            kinghits.insert({xk+dx[j]*a,yk+dy[j]*b});
            kinghits.insert({xk+dx[j]*b,yk+dy[j]*a});
            queenhits.insert({xq+dx[j]*a,yq+dy[j]*b});
            queenhits.insert({xq+dx[j]*b,yq+dy[j]*a});
        }
        int ans=0;
        for (auto position:kinghits){
            if (queenhits.find(position)!=queenhits.end()){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}