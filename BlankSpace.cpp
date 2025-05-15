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
        int maxBlank=0;
        int maxCurr=0;
        for (int i=0;i<n;i++){
            if (array[i]==0){
                maxCurr++;
                
            }else{
                maxCurr=0;
            }
            maxBlank=max(maxBlank,maxCurr);
        }
        cout<<maxBlank<<endl;
    }
    return 0;
}