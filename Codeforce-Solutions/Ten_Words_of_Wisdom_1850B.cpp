// Problem: Ten Words of Wisdom
// Links: https://codeforces.com/contest/1850/problem/B


#include <bits/stdc++.h>
#define ll long long
#define hea cout << "Yes\n"
#define na cout << "No\n"
#define endl '\n'
#define need_for_speed               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using namespace std;

int main(void)
{
    need_for_speed
    int t;
    cin >> t;
    while (t--)
    {
        int t1, quality = 0, x1 = 0, x2;
        cin >> t1;
        while (t1--)
        {
            int x, y;
            cin >> x >> y;
            if (x <= 10)
                if (y > quality)
                {
                    quality = y;
                    x2 = x1;
                }
            ++x1;
        }
        cout << x2 + 1 << endl;
    }
}