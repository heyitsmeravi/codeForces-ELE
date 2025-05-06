#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>number(n);
    for (int i=0;i<n;i++){
        cin>>number[i];
    }
    int small=abs(number[0]);
    for (int i=1;i<n;i++){
        if(small>abs(number[i])){
            small=abs(number[i]);
        }
    }
    cout<<small<<endl;
    return 0;
}