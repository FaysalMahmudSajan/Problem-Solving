// Problem: Petya and Strings
// Links: https://codeforces.com/contest/112/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
using namespace std;

int solve(string s, string s1)
{
    if (s == s1)
        return 0;
    else if (s > s1)
        return 1;
    else
        return -1;
}

int main(void)
{
    need_speed;
    string str1, str2;
    cin >> str1 >> str2;
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    cout << solve(str1, str2) << endl;
}