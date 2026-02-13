// Problem: Juicer
// Links: https://codeforces.com/contest/709/problem/A


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, b, d, x, sum = 0, cnt = 0;
    cin >> n >> b >> d;
    while (n--)
    {
        cin >> x;
        if (x <= b)
        {
            sum += x;
            if (sum > d)
            {
                cnt++;
                sum = 0;
            }
        }
    }
    cout << cnt << endl;
}