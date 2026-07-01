#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool ans=0;
        for(int i:arr){
            if(i==67){
                cout<<"YES"<<endl;
                ans=1;
                break;
            }
        }
        if(!ans){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}