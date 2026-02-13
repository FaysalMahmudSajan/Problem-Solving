// Problem: Is It a Cat?
// Links: https://codeforces.com/contest/1800/problem/A


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
        string s, s1;
        cin >> s;
        int Sz = s.size();
        for (int i = 0; i < Sz; i++)
        {
            char c = tolower(s[i]);
            char c1 = tolower(s[i + 1]);
            if (c != c1)
            {
                s1 += c;
            }
        }
        if (s1 == "meow")
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}