// Problem: Short Sort
// Links: https://codeforces.com/contest/1873/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
#define ll long long
#define endl '\n'
#define hea printf("Yes\n")
#define na printf("No\n")
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define stop return 0;
#define v_print(v)   \
    for (auto u : v) \
    cout << u << " "
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s == "abc" or s == "bac" or s == "acb" or s == "cba")
        hea;
    else
        na;
}

int main(void)
{
    need_speed;
    int t;
    cin >> t;
    while (t--)
        solve();
}