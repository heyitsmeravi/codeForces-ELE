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
        vector<long long>arr(n);
        for (long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long count=0;
        for(long long i=0;i<n-1;i++){
            if (arr[i]%2==arr[i+1]%2){
                count++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}