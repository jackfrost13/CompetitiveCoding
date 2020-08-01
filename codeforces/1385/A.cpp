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
    ll x, y, z, a, b, c;
    cin >> x >> y >> z;
    a = min(x, y);
    b = min(x, z);
    c = min(y, z);
    if (x == max(a, b) && y == max(a, c) && z == max(b, c))
    {
        cout << "YES\n";
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        cout << "NO\n";
    }
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