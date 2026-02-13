// Problem: Registration System
// Links: https://codeforces.com/contest/4/problem/C


#include <bits/stdc++.h>
#define endl "\n"
#define need_speed                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;
int main()
{
    need_speed;
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s] >= 1)
        {
            cout << s << mp[s] << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
        mp[s]++;
    }
}