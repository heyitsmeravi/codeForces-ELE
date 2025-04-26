#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>fuels=a;
        fuels.push_back(x);
        fuels.insert(fuels.begin(),0);
        int maxVol=0;
        for (int i=0;i<fuels.size()-2;i++){
            maxVol=max((fuels[i+1]-fuels[i]),maxVol);
        }
        maxVol=max(maxVol,2*(fuels[n+1]-fuels[n]));
        cout<<maxVol<<endl;

    }
    return 0;
}