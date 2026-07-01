#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
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
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ans=n/i;
            break;
        }
    }
    if(ans!=0){
        cout<<ans<<" "<<n-ans<<endl;
    }else{
        cout<<1<<" "<<n-1<<endl;
    }
 
    // long long ans_a = 1;
	// long long ans_b = n - 1;
	// for (long long fac = 2; fac * fac <= n; fac++)
	// {
	// 	if (n % fac == 0)
	// 	{
    //         ans_a = n / fac;
	// 		ans_b = n - ans_a;
	// 		break;
    //     }
    // }
}
 
signed main(){
    ll T = 1;
    cin >> T;
    while(T--)
        solve();
    return 0;
}