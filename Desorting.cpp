#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>array(n);
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        if (is_sorted(array.begin(),array.end())){
            long long diff=10000000000;
            for (int i=0;i<n-1;i++){
                diff=min(diff,(array[i+1]-array[i])/2+1);
            }
            cout<<diff<<endl;
            
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}