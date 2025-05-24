#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for (long long i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int max_arr=arr[n-1];
        int min_arr=arr[0];
        if (min_arr==max_arr){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<max_arr<<" ";
            for (long long i=0;i<n-1;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}