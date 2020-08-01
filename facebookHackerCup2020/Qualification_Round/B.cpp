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
void checkChar(char x, ll &ca, ll &cb)
{
    if (x == 'A')
        ca++;
    else
    {
        cb++;
    }
}
void solveTestcase()
{
    ll n, i, j, ca, cb;
    string s, k = "";
    cin >> n >> s;
    bool found = true;
    while (s.size() != 1 && found)
    {
        found = false;
        for (i = 0; i < s.size(); i++)
        {
            ca = 0, cb = 0;
            if (i < s.size() - 2)
            {
                checkChar(s[i], ca, cb);
                checkChar(s[i + 1], ca, cb);
                checkChar(s[i + 2], ca, cb);
            }
            if (ca && cb)
            {
                found = true;
                if (ca > cb)
                {
                    k += 'A';
                }
                else
                {
                    k += 'B';
                }
                i += 2;
            }
            else
            {
                k += s[i];
            }
        }
        s = k;
        k="";
    }
    if (found)
        cout << "Y\n";
    else
    {
        cout << "N\n";
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
        cout << "Case #" << testcase << ": ";

        solveTestcase();
    }
    return 0;
}