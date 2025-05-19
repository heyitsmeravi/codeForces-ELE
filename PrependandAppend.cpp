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
        string num;
        cin>>num;  
        while (n>1 && num.front()!=num.back()){
            num=(num.substr(1,n-2));
            n-=2;
        }
        cout<<n<<endl;
    }
    return 0;
}