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
    ll n, x, i;
    cin >> n;
    vector<string> ans;
    string s = string(52, 'a');
    ans.push_back(s);
    while (n--)
    {
        cin >> x;
        s[x] = s[x] + 1;
        if (s[x] > 'z')
        {
            s[x] -= 26;
        }
        ans.push_back(s);
    }
    for (i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
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