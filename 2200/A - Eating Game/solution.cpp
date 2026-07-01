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
        int maxi=INT_MIN;
        for(int i:arr){
            maxi=max(maxi,i);
        }
        int count=0;
        for(int i:arr){
            if(i==maxi){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}