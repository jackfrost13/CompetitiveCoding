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
    ll n, i, j, ans = 0;
    cin >> n;
    vector<ll> extra;

    string s, t;
    cin >> s >> t;
    for (i = 0; i < n; i++)
    {
        if (s[i] > t[i])
        {
            cout << "-1\n";
            return;
        }
    }
    char temp = 'z';
    for (i = 0; i < 20; i++)
    {
        extra.clear();
        temp = 'z';
        for (j = 0; j < n; j++)
        {
            if (s[j] < t[j] && s[j] == i + 97)
            {
                extra.push_back(j);
                temp = min(temp, t[j]);
            }
        }
        for (j = 0; j < extra.size(); j++)
        {
            s[extra[j]] = temp;
        }
        ans += extra.size() > 0;
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
    ll noOfTestcases, testcase;
    cin >> noOfTestcases;
    for (testcase = 1; testcase <= noOfTestcases; testcase++)
    {
        // cout << "Case #" << testcase << ": ";
        solveTestcase();
    }
    return 0;
}