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
    ll n, i, j, k, x, ans = 0, start = 0, end, maxi;
    cin >> n;
    vector<ll> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    start = 0, end = n - 1, maxi = LLONG_MIN;
    while (start < end)
    {
        x = min(a[start], a[end]);
        if (x < maxi)
        {
            if (x == a[start])
            {
                ans = start;
                end = n - 1;
                maxi = LLONG_MIN;
            }
            else
            {
                ans = end;
                start = end;
                // end=n-1;
            }
        }
        else
        {
            maxi = x;
            if (x == a[start])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    }
    while (ans > 0 && a[ans] >= a[ans - 1])
    {
        ans--;
    }
    cout << ans << endl;
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