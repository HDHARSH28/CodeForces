#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
 
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> pbds;
 
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
void _print(pair<T1,T2> p) {
    cerr << "{" << p.first << "," << p.second << "}";
}
 
template<class T>
void _print(vector<T> v) {
    cerr << "[ ";
    for (T i : v) { _print(i); cerr << " "; }
    cerr << "]";
}
 
 
ll mod_power(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
ll mod_inverse(ll a, ll mod = MOD) {
    return mod_power(a, mod - 2, mod);
}
 
 
ll fact[MAXN], invfact[MAXN];
 
void init_nCr() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
        fact[i] = (fact[i-1] * i) % MOD;
 
    invfact[MAXN-1] = mod_inverse(fact[MAXN-1]);
    for (int i = MAXN-2; i >= 0; i--)
        invfact[i] = (invfact[i+1] * (i+1)) % MOD;
}
 
ll nCr(ll n, ll r) {
    if (r > n || r < 0) return 0;
    return (((fact[n] * invfact[r]) % MOD) * invfact[n-r]) % MOD;
}
 
 
vector<int> primes;
int spf[MAXN];
 
void sieve() {
    for (int i = 1; i < MAXN; i++) spf[i] = i;
 
    for (int i = 2; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
 
    for (int i = 2; i < MAXN; i++)
        if (spf[i] == i)
            primes.pb(i);
}
 
vector<int> factorize(int x) {
    vector<int> factors;
    while (x != 1) {
        factors.pb(spf[x]);
        x /= spf[x];
    }
    return factors;
}
 
 
template<class T>
unordered_map<T,int> get_frequency(vector<T> &v) {
    unordered_map<T,int> freq;
    for (auto &x : v)
        freq[x]++;
    return freq;
}
 
 
vector<vector<int>> build_graph(int n, int m, bool directed = false) {
    vector<vector<int>> adj(n+1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        if (!directed)
            adj[v].pb(u);
    }
    return adj;
}
 
 
void solve() {
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
 
    if (s < k * b) {
        cout << -1 << "
";
        return;
    }
 
    vll nos(n);
    ll first = k * b;
    s = s - first;
    
    ll capacity = s / k;
    ll rem;
    
    if (capacity < 1) {
        rem = s;
        first += rem;
        s -= rem;
    } else {
        first += k - 1;
        s -= k - 1;
    }
        
    nos[0] = first;
    ll i = 1;
    
    while (s > 0 && i < n) {
        ll x; 
        capacity = s / k;
        
        if (capacity < 1) {
            rem = s;
            x = rem;
            s -= rem;
        } else {
            x = k - 1;
            s -= k - 1;
        }
        
        nos[i] = x;
        i++;
    }
    
    if (s > 0) {
        cout << -1 << "
";
        return;
    }
    
    while (i < n) {
        nos[i] = 0;
        i++;
    }
    
    for (int j = 0; j < n; j++) {
        cout << nos[j] << " ";
    }
    cout << "
";
}
 
int main(){
    init_nCr();
    sieve();
 
    int T = 1;
    cin >> T;
    while(T--) solve();
    return 0;
}