// Problem: New World, New Me, New Array
// Links: https://codeforces.com/contest/2072/problem/A


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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int isPossible = n * p;
        if (abs(k) <= abs(isPossible))
        {
            if (k == 0)
                cout << 0 << endl;
            else if (k % p == 0)
            {
                cout << abs(k / p) << endl;
            }
            else
            {
                k=abs(k);
                p=abs(p);
                cout << (k + p - 1) / p << endl;
            }
        }
        else
            cout << -1 << endl;
    }
}

int main(void)
{
    need_speed;
    solve();
}