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
        vector<int>array(n);
        for (int i=0;i<n;i++){
            cin>>array[i];
        }
        int xor_array=0;
        for (int ele:array){
            xor_array^=ele;
        }
        if (n%2==0){
            if (xor_array==0){
                cout<<0<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            cout<<xor_array<<endl;
        }
    }
}