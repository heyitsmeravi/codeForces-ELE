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
        vector<int>array(n);
        for (int i=0;i<n;i++){
            cin>>array[i];
        }
        int flag=0;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (__gcd(array[i],array[j])<=2){
                    flag=1;
                }
            }
        }
        if (flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}