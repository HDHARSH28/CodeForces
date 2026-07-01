#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        bool ans=0;
        if(n==1){
            cout<<"YES"<<endl;
            ans=1;
        }
        bool changed = true;
        while(changed){
            changed = false;
            for(int i=1;i<=n/2;i++){
                if(arr[i] > arr[2*i]){
                    swap(arr[i], arr[2*i]);
                    changed = true;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(arr[i-1]>arr[i]){
                cout<<"NO"<<endl;
                ans=1;
                break;
            }
        }
        if(!ans){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}