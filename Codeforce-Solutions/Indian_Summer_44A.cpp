// Problem: Indian Summer
// Links: https://codeforces.com/contest/44/problem/A

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
    set<pair<string, string>> st;
    int t;
    cin >> t;
    while (t--)
    {
        string leaf, tree;
        cin >> leaf >> tree;
        st.insert({leaf, tree});
    }
    cout << st.size() << endl;
}

int main(void)
{
    need_speed;
    solve();
}