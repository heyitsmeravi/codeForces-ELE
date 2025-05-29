#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool round_integers_check(long long x){
    int count_zeroes=0;
    int count_digits=0;
    while(x){
        if (x%10==0){
            count_zeroes++;
        }
        count_digits++;
        x=x/10;
    }
    return count_zeroes==count_digits-1;
}
int main(){
    vector<long long>round_integers;
    for (long long i=1;i<=999999;i++){
        if(round_integers_check(i)==true){
            round_integers.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long answer=0;
        for (int j=0;j<round_integers.size();j++){
            if (round_integers[j]<=n){
                answer++;
            }else{
                break;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}