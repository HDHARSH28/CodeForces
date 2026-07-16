#include <bits/stdc++.h>
 
#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...) 42
#endif
 
using namespace std;
 
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
 
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fi first
#define se second
 
#define pii pair<int, int>
#define ve vector
#define vi vector<int>
#define vb vector<bool>
#define vstr vector<string>
#define vpii vector<pii>
#define vll vector<long long>
 
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
 
#define yes cout << "YES
"
#define no cout << "NO
"
 
#define read(a, n)              \
    for (int i = 0; i < n; ++i) \
    cin >> a[i]
#define print(a, n)             \
    for (int i = 0; i < n; ++i) \
        cout << a[i] << " ";    \
    cout << "
"
 
#define el "
"
#define v(n)          \
    vector<int> a(n); \
    for (auto &x : a) \
        cin >> x;
 
const int mxn = 1e6 + 5;
const int mod = 1e9 + 7;
const ll INF = 1e18 + 6;
 
void solve()
{
    int n, m;
    cin >> n >> m;
    v(n);
    vi b(m);
    read(b, m);
    sort(all(b));
    vll p(n + 1, 0);
    for (int i = 1; i <= n; i++)
        p[i] = p[i - 1] + a[i - 1];
    ll ans = 0;
    int prev = 0;
    for (int i : b)
    {
        ans +=abs( p[i] - p[prev]);
        prev = i;
    }
 
 
    ans+= p[n]-p[prev];
    cout<<ans<<el;
}
 
int32_t main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}