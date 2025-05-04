#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>array(n);
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        bool present=false;
        if (find(array.begin(),array.end(),k)!=array.end()){
            present=true;
        }
        if (present){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}