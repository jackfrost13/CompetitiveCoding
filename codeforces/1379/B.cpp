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
bool find(ll x, ll l, ll r, ll m, ll a)
{
    if (x == m)
    {
        cout << a << " " << l << " " << l << endl;
        return true;
    }
    if (x > m)
    {
        ll diff = x - m;
        if (l + diff <= r)
        {
            ll n = (m + diff) / a;
            if (n != 0)
            {
                cout << a << " " << l << " " << l + diff << endl;
                return true;
            }
        }
    }
    else
    {
        ll diff = m - x;
        if (l + diff <= r)
        {
            ll n = (m - diff) / a;
            if (n != 0)
            {
                cout << a << " " << l + diff << " " << l << endl;
                return true;
            }
        }
    }
    return false;
}
void solveTestcase()
{
    ll l, r, m, i, j;
    cin >> l >> r >> m;
    for (i = l; i <= r; i++)
    {
        if (find((m / i) * i, l, r, m, i) || find(((m / i) + 1) * i, l, r, m, i))
        {
            return;
        }
    }
    cout << "NOT FOUND\n";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastIO;
    ll noOfTestcases, testcase;
    cin >> noOfTestcases;
    for (testcase = 1; testcase <= noOfTestcases; testcase++)
    {
        // cout << "Case #" << testcase << ": ";
        solveTestcase();
    }
    return 0;
}