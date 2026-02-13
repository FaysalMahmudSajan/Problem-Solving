// Problem: Not Quite Latin Square
// Links: https://codeforces.com/contest/1915/problem/B


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{
    need_speed;
    int n;
    cin >> n;
    while (n--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 3; i++)
        {
            if (a[i] == '?')
            {
                cout << char('A' + 'B' + 'C' - (b[i] + c[i])) << endl;
                break;
            }
            else if (b[i] == '?')
            {

                cout << char('A' + 'B' + 'C' - (a[i] + c[i])) << endl;
                break;
            }
            else if (c[i] == '?')
            {
                cout << char('A' + 'B' + 'C' - (b[i] + a[i])) << endl;
                break;
            }
        }
    }
}