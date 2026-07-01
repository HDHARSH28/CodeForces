#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,w;
        cin>>n>>w;
        long long ans=(n/w);
        ans=ans*(w-1);
        ans=ans+(n%w);
        cout<<ans<<endl;
    }
    return 0;
}