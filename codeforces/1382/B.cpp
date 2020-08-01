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
    ll n, c = 0, i;
    cin >> n;
    vector<ll> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n && a[i] == 1; i++)
    {
        c++;
    }
    if (i == n)
    {
        if (c % 2 == 0)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "First\n";
        }
    }
    else
    {
        if (c % 2 == 0)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
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