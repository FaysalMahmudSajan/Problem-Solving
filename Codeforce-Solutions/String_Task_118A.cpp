// Problem: String Task
// Links: https://codeforces.com/contest/118/problem/A

#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
using namespace std;

int main(void)
{
    need_speed;
    string str, s;
    cin >> str;
    for (auto ch : str)
    {
        ch = tolower(ch);
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y')
            continue;
        else
        {
            s += '.';
            s += ch;
        }
    }
    cout << s << endl;
}