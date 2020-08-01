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
    ll n, c = 0, matchBit, i;
    string a, b;
    cin >> n;
    cin >> a >> b;
    if (a == b)
    {
        cout << "0\n";
        return;
    }
    vector<ll> ans;
    matchBit = n - 1;
    map<char, char> mp;
    mp['0'] = '1';
    mp['1'] = '0';
    char e;
    while (matchBit >= 0)
    {
        while (matchBit >= 0 && a[matchBit] == b[matchBit])
        {
            matchBit--;
        }
        if (matchBit >= 0)
        {
            if (a[0] == b[matchBit])
            {
                a[0] = mp[a[0]];
                ans.pb(1);
            }
            for (i = 0; i < (matchBit + 1) / 2; i++)
            {
                e = a[i];
                a[i] = mp[a[matchBit - i]];
                a[matchBit - i] = mp[e];
            }
            if (matchBit % 2 == 0)
            {
                a[matchBit / 2] = mp[a[matchBit / 2]];
            }
            ans.pb(matchBit + 1);
        }
    }
    cout << ans.size() << " ";
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
    ll noOfTestcases, testcase;
    cin >> noOfTestcases;
    for (testcase = 1; testcase <= noOfTestcases; testcase++)
    {
        // cout << "Case #" << testcase << ": ";
        solveTestcase();
    }
    return 0;
}