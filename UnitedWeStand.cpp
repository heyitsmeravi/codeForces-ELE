#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

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
        sort(a.begin(),a.end());
        vector<int>b;
        vector<int>c;
        b.push_back(a[0]);
        for (int i=1;i<n;i++){
                if (b[0]%a[i]==0){
                    b.push_back(a[i]);
                }else{
                    c.push_back(a[i]);
                }
        }
        if (b.size()==0 || c.size()==0){
            cout<<-1<<endl;
        }else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for (int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for (int j=0;j<c.size();j++){
                cout<<c[j]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}