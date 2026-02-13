// Problem: Watermelon
// Links: https://codeforces.com/contest/4/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
#define ll long long
#define endl '\n'
#define hea cout << "Yes\n"
#define na cout << "No\n"
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define stop return 0;
#define v_print(v)   \
    for (auto u : v) \
    cout << u << " "
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
        na;
    else if (n % 2 == 0)
        hea;
    else
        na;
}

int main(void)
{
    solve();
}