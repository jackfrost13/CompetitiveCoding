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
    ll n, i, j, k;
    string s, a, extra;
    string y = "abacaba";
    cin >> n >> s;
    bool found = true;
    if (n < 7)
    {
        cout << "No" << endl;
    }
    else
    {
        for (i = 0; i < n - 7 + 1; i++)
        {
            a = s;
            for (k = i; k < i + 7; k++)
            {
                if (a[k] == '?')
                    a[k] = y[k - i];
            }
            int freq = 0;
            for (j = 0; j < n - 7 + 1; j++)
            {
                extra = a.substr(j, 7);
                if (extra.compare("abacaba") == 0)
                    freq++;
            }
            if (freq == 1)
            {
                cout << "Yes" << endl;
                for (j = 0; j < n; j++)
                {
                    if (a[j] == '?')
                        a[j] = 'z';
                }
                cout << a << endl;
                found = false;
                break;
            }
        }
        if (found)
        {
            cout << "No" << endl;
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