// Problem: Triple
// Links: https://codeforces.com/contest/1669/problem/B


#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{
    // fast;
    need_speed;
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        bool found = true;
        for (auto u : mp)
        {
            if (u.second >= 3)
            {
                cout << u.first << endl;
                found = false;
                break;
            }
        }
        if (found)
            cout << -1 << endl;
        mp.clear();
    }
}