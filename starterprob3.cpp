#include "bits/stdc++.h"
using namespace std;

#define int long long
#define ll long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define ln "\n"
#define deb(x) cout << #x << " " << x << ln;
template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
    in >> a.fr >> a.sc;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
    out << a.fr << " " << a.sc;
    return out;
}
template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}
const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

void solve(int test)
{
    int n, m, l;
    cin >> n >> m >> l;
    map<int, int> mp;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int temper;
            cin >> temper;
            mp[temper] = i;
        }
    }

    std::vector<int> strip(l);
    for (int &x : strip)
    {
        cin >> x;
    }

    vector<int> ans(l);
    for (int i = 0; i < l; i++)
    {
        ans[i] = mp[strip[i]];
    }
    uniq(ans);

    cout << ans.size() << ln;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR
    init();
#endif
    int t = 1;
    cin >> t;
    rep(i, 1, t + 1) solve(i);
    return 0;
}