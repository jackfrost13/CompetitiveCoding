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
string s;
ll count(ll start, ll l, char c)
{
    ll ans = 0, i;
    for (i = start; i < start + l; i++)
    {
        if (s[i] != c)
            ans++;
    }
    return ans;
}

ll getAns(ll start, ll l, char c)
{
    ll x, y;
    if (l == 0)
        return 0;
    if (l == 1)
    {
        if (s[start] == c)
            return 0;
        return 1;
    }

    x = count(start, l / 2, c) + getAns(start + l / 2, l / 2, c + 1);
    y = getAns(start, l / 2, c + 1) + count(start + l / 2, l / 2, c);

    return min(x, y);
}
void solve()
{
    ll n, y = 0;
    cin >> n >> s;
    cout << getAns(y, n, 'a') << endl;
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