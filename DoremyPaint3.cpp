#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>array(n);
        for (int i=0;i<n;i++){
            cin>>array[i];
        }
        map<int , int> freq;
        for (int i=0;i<n;i++){
            freq[array[i]]++;
        }
        if (freq.size()>2){
            cout<<"NO"<<endl;
        }else{
            int count1=freq.begin()->second;
            int count2=freq.rbegin()->second;
            if (count1==count2){
                cout<<"YES"<<endl;
            }else if (abs(count1-count2)==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}