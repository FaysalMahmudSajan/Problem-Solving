// Problem: Can I Square?
// Links: https://codeforces.com/contest/1915/problem/C

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
        ll t1, x = 0;
        cin >> t1;
        while (t1--)
        {
            ll value;
            cin >> value;
            x += value;
        }
        ll sqrtValue = sqrt(x);
        if (sqrtValue * sqrtValue == x)
            hea;
        else
            na;
    }
}