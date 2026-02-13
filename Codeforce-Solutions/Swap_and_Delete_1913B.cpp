// Problem: Swap and Delete
// Links: https://codeforces.com/contest/1913/problem/B


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
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (char c : s)
        {
            if (c == '0')
                zero++;
            else
                one++;
        }
        for (char c : s)
        {
            if (c == '1')
            {
                if (zero > 0)
                    zero--;
                else
                    break;
            }
            else
            {
                if (one > 0)
                    one--;
                else
                    break;
            }
        }
        cout << one + zero << endl;
    }
}