// Problem: Haiku
// Links: https://codeforces.com/contest/78/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
using namespace std;

int main(void)
{
    string s1, s2, s3;
    int one = 5, two = 7, three = 5;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    int sum = 0;
    for (auto ch : s1)
    {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
            sum++;
    }
    if (sum != one)
    {
        cout << "NO" << endl;
        return 0;
    }

     sum = 0;
    for (auto ch : s2)
    {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
            sum++;
    }
    if (sum != two)
    {
        cout << "NO" << endl;
        return 0;
    }
     sum = 0;
    for (auto ch : s3)
    {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
            sum++;
    }
    if (sum != three)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
}