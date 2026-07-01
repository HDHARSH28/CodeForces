#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
    long long t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(x==0 && y==0){
            cout<<0<<endl;
            break;
        }
        if((y<x && y==1)||(x-y==1)||y==x){
            cout<<-1<<endl;
        }else if(y==0){
            cout<<1<<endl;
        }else if(y<x){
            cout<<3<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}