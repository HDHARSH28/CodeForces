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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        bool ans=0;
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                ans=1;
            }
        }
        if(ans){
            cout<<1<<endl;
        }else{
            cout<<n<<endl;
        }
    }
    return 0;
}