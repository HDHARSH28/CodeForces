#include<bits/stdc++.h>
using namespace std;
int digit(int y){
    long long s=0;
    while(y>0){
        s+=y%10;
        y/=10;
    }
    return s;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int count=0;
        for(int y=n;y<=n+100;y++){
            if(y-digit(y)==n){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}