#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool isContinuous=false;
        int sumEmpty=0;
        cin>>n;
       string s;
       cin>>s;
       for (int i=0;i<n;i++){
        if (s[i] == '.' && i+1<n && s[i+1] == '.' && i+2<n && s[i+2]=='.'){
            isContinuous=true;
            break;
        }
        if (s[i]=='.'){
            sumEmpty++;
        }
       }
       if(isContinuous){
        cout<<2<<endl;
       }else{
        cout<<sumEmpty<<endl;
       }
       

        

    }
    return 0;
}