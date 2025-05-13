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
        vector<int>unitArray(n);
        for (int i=0;i<n;i++){
            cin>>unitArray[i];
        }
        int count1=0;
        int countm1=0;
        for (int i=0;i<n;i++){
            if (unitArray[i]==1){
                count1++;
            }else{
                countm1++;
            }
        }
        int oper=0;
        while(count1<countm1||countm1%2==1){
            count1++;
            countm1--;
            oper++;
        }
        cout<<oper<<endl;
    }
    return 0;
}