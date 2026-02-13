// Problem: How Much Does Daytona Cost?
// Links: https://codeforces.com/contest/1878/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
#define ll long long
#define endl '\n'
#define hea cout << "Yes\n"
#define na cout << "No\n"
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define v_print(v)   \
    for (auto u : v) \
    cout << u << " "
using namespace std;
int main(void)
{
    need_speed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        bool Nofind = false;
        cin >> n >> x;
        while (n--)
        {
            int x1;
            cin >> x1;
            if (x1 == x)
                Nofind = true;
        }
        if (Nofind)
            hea;
        else
            na;
    }
}