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
    ll w,h;
    cin>>w>>h;
    ll k1,k2,k3,k4;
    cin>>k1;
    vll a1(k1);
    input(a1,k1);
    cin>>k2;
    vll a2(k2);
    input(a2,k2);
    cin>>k3;
    vll a3(k3);
    input(a3,k3);
    cin>>k4;
    vll a4(k4);
    input(a4,k4);
    ll ans=INT_MIN;
    ans=max(ans,(a1[k1-1]-a1[0])*h);
    ans=max(ans,(a2[k2-1]-a2[0])*h);
    ans=max(ans,(a3[k3-1]-a3[0])*w);
    ans=max(ans,(a4[k4-1]-a4[0])*w);
    cout<<ans<<endl;
}
 
signed main(){
    ll T = 1;
    cin >> T;
    while(T--)
        solve();
    return 0;
}