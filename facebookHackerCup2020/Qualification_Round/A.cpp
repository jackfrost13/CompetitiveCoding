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
    ll n,i,j,k,l;
    cin>>n;
    vector<vector<char>> a(n,vector<char>(n,'Y'));
    string in,out;
    cin>>in>>out;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(out[j-1]=='N' || in[j]=='N')
            {
                break;
            }
        }
        for(;j<n;j++)
        {
            a[i][j]='N';
        }
        for(j=i-1;j>=0;j--)
        {
            if(out[j+1]=='N' || in[j]=='N')
            {
                break;
            }
        }
        for(;j>=0;j--)
        {
            a[i][j]='N';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main(int argc, char **argv)
{
#ifndef ONLINE_JUDGE
    freopen(argv[1], "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastIO;
    ll noOfTestcases, testcase;
    cin >> noOfTestcases;
    for (testcase = 1; testcase <= noOfTestcases; testcase++)
    {
        cout << "Case #" << testcase << ": ";
        cout<<endl;
        solveTestcase();
    }
    return 0;
}