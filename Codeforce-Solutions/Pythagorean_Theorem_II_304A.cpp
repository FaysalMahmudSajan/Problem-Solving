// Problem: Pythagorean Theorem II
// Links: https://codeforces.com/contest/304/problem/A


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, cnt = 0;
    cin >> n;
    for (int a = 1; a <= n; a++)
        for (int b = a; b <= n; b++)
        {
            // another way
            int p = sqrt(a * a + b * b);
            if (p <= n and p * p == a * a + b * b)
                cnt++;
        }
    cout << cnt << endl;
}