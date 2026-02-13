// Problem: Skibidus and Amog'u
// Links: https://codeforces.com/contest/2065/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;
int main(void)
{
    need_speed;
    string str;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> str;
        int ln = str.size();
        // if (str[ln - 1] == 's' and str[ln - 2] == 'u')
        // {
        // str[ln - 1] = str[ln];
        // str[ln - 2] = 'i';
        string s = str.substr(0, ln - 2);
        cout << s<<'i' << endl;
        //     }
        //     else if(str[ln - 1] == 'i')
        //         cout << str << endl;
    }
}