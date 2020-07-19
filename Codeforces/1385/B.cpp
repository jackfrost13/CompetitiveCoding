#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define MOD 1000000007
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
void solve()
{
    ll n, i, j, k, x;
    cin >> n;
    unordered_set<ll> s;
    vector<ll> ans;
    for (i = 0; i < 2 * n; i++)
    {
        cin >> x;
        if (s.count(x) == 0)
        {
            ans.push_back(x);
            s.insert(x);
        }
    }
    for (i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastIO;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}