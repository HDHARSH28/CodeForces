#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long c;
        cin>>c;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long b[n];
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<long long, long long>> v(n);
        for (long long i = 0; i < n; i++)
			v[i] = {b[i], a[i]};
		long long minimum_cost = c;
		sort(v.begin(), v.end());
		long long count = 1; 
		for (auto it : v)
		{
			long long can_be_shared = it.second;
			long long sharing_cost = it.first;
			if (sharing_cost >= c)
				break;
			if (count + can_be_shared > n)
			{
				minimum_cost += (n - count) * sharing_cost;
				count = n; 
				break;
			}
			else
			{
				minimum_cost += can_be_shared * sharing_cost; 
				count += can_be_shared; 
			}
        }
		minimum_cost += (n - count) * c;
		cout << minimum_cost << endl;
    }
}