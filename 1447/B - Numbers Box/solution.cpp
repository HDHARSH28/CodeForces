#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <cmath>
 
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int MAXN = 1000005;
 
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define input(v,n) for(int i = 0; i < n; i++) cin >> v[i]
 
struct FastIO {
    FastIO(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }
} fastio;
 
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif
 
void _print(int x) { cerr << x; }
void _print(long long x) { cerr << x; }
 
template<class T1, class T2>
void _print(pair<T1,T2> p){
    cerr << "{" << p.first << "," << p.second << "}";
}
 
template<class T>
void _print(vector<T> v){
    cerr << "[ ";
    for (T i : v){
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
 
template<typename T>
istream& operator>>(istream &in, vector<T> &v){
    for(auto &x : v) in >> x;
    return in;
}
 
template<typename T>
ostream& operator<<(ostream &out, const vector<T> &v){
    for(const auto &x : v) out << x << " ";
    return out;
}
 
vector<int> primes;
int spf[MAXN];
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int> (m));
    int count=0;
    bool ans=0;
    ll sum=0;
    int mini=INT_MAX;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]<0){
                count++;
                sum-=arr[i][j];
                mini=min(mini,-arr[i][j]);
            }
            else if(arr[i][j]==0){
                ans=1;
            }else{
                sum+=arr[i][j];
                mini=min(mini,arr[i][j]);
            }
        }
    }
    if(ans || count%2==0){
        cout<<sum<<endl;
    }else{
        cout<<sum-2*mini<<endl;
    }
 
}
 
signed main(){
    ll T = 1;
    cin >> T;
    while(T--)
        solve();
    return 0;
}