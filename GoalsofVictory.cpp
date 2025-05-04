#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>goals(n-1);
        for (int i=0;i<n-1;i++){
            cin>>goals[i];
        }
        int sumGoals=0;
        for (int i=0;i<n-1;i++){
            sumGoals+=goals[i];
        }
        cout<<0-sumGoals<<endl;
    }
    return 0;
}