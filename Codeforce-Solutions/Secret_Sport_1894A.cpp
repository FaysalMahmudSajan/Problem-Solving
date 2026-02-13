// Problem: Secret Sport
// Links: https://codeforces.com/contest/1894/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
using namespace std;

int main(void)
{
    need_speed;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        cout << s[x - 1] << endl;
    }
}