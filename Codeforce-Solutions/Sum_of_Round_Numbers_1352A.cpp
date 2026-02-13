// Problem: Sum of Round Numbers
// Links: https://codeforces.com/contest/1352/problem/A


#include <bits/stdc++.h>
#define ll long long
#define hea cout << "Yes\n"
#define na cout << "No\n"
#define endl '\n'
#define need_speed               \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using namespace std;

int arr[10001];
int main(void)
{
    need_speed int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 1, j = 0, x = 0;
        int Sz = s.size();
        while (Sz--)
        {
            if (s.back() != '0')
            {
                arr[j++] = (s.back() - '0') * i;
                x++;
            }
            s.pop_back();
            i *= 10;
        }
        cout << x << endl;
        for (int i = 0; i < x; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}