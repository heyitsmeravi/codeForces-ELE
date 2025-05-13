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
        vector<int>a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=n+1;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cout<<sum-a[i]<<" ";
        }
        cout<<endl;
    }
}