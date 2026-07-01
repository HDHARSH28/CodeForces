#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int pos=0;
        int neg=0;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==1){
                pos++;
            }
            else{
                neg++;
            }
        }
        while(neg>pos){
            neg--;
            pos++;
            count++;
        }
        if(neg%2!=0){
            count++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}