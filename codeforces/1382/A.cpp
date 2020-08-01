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
void solveTestcase()
{
    ll m, n, x, ans;
    bool found;
    cin >> m >> n;
    unordered_set<ll> a;
    found = false;
    while (m--)
    {
        cin >> x;
        a.insert(x);
    }
    while (n--)
    {
        cin >> x;
        if (found == false && a.count(x) > 0)
        {
            found = true;
            ans = x;
        }
    }
    if (!found)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n1 " << ans << endl;
    }
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