// Problem: Advantage
// Links: https://codeforces.com/contest/1760/problem/C

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> v, v1;
    while (t--)
    {
        int n, x,f1,f2;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
            v1.push_back(x);
        }
        sort(v1.rbegin(), v1.rend());
        int b1 = v1[0];
        int b2 = v1[1];
        for (int u : v)
        {
            if (b1 != u)
                cout << u - b1 << " ";
            else
                cout << u - b2 << " ";
        }
        cout << endl;
        v.clear(), v1.clear();
    }
}