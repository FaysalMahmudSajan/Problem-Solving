// Problem: Boxes Packing
// Links: https://codeforces.com/contest/903/problem/C


#include <bits/stdc++.h>
#define endl "\n"
#define need_speed                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;
int main()
{
    need_speed;
    int t, HiFq;
    cin >> t;
    map<int, int> mp;
    while (t--)
    {
        int x;
        cin >> x;
        mp[x]++;
        HiFq = max(HiFq, mp[x]);
    }
    cout << HiFq << endl;
    return 0;
}