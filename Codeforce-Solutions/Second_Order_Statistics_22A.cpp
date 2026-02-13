// Problem: Second Order Statistics
// Links: https://codeforces.com/contest/22/problem/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int x;
    cin >> x;
    while (x--)
    {
        int ip;
        cin >> ip;
        s.insert(ip);
    }
    if (s.size() == 1)
        cout << "NO" << endl;
    else
    {
        cout << *(++s.begin()) << endl;
    }
}