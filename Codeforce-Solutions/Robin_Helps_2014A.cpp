// Problem: Robin Helps
// Links: https://codeforces.com/contest/2014/problem/A


#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int robinGold = 0;
        int giveCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                robinGold += a[i];
            }
            else if (a[i] == 0 && robinGold > 0)
            {
                robinGold--;
                giveCount++;
            }
        }

        cout << giveCount << endl;
    }
}
int main()
{
    IOS
    solve();
    return 0;
}