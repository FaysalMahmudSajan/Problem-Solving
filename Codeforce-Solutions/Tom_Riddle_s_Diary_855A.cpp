// Problem: Tom Riddle's Diary
// Links: https://codeforces.com/contest/855/problem/A


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
    map<string, bool> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s] == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            mp[s] = 1;
            cout << "NO" << endl;
        }
    }
}