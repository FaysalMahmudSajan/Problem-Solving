// Problem: Skibidus and Ohio
// Links: https://codeforces.com/contest/2065/problem/B

#include <iostream>
#include <string>

using namespace std;

int solve(string s)
{
    int n = s.length();
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            return 1; 
        }
    }
    return n; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}