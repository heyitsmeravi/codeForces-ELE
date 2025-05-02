#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x>>s;
        int count=0;
        while (x.find(s)==string::npos && count<6){
            count++;
            x=x+x;
            // cout<<x;
        }
        if(count==6){
            count=-1;
        }
        cout<<count<<endl;
    }
    return 0;
}