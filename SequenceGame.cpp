#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>out;
        out.push_back(b[0]);
        for (int i=1;i<n;i++){
            if (b[i-1]<=b[i]){
                out.push_back(b[i]);
            }else{
                out.push_back(b[i]);
                out.push_back(b[i]);
            }
        }
        cout<<out.size()<<endl;
        for (int i=0;i<out.size();i++){
            cout<<out[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}