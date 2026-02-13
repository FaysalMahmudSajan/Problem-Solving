// Problem: Radio Station
// Links: https://codeforces.com/contest/918/problem/B


#include <bits/stdc++.h>
#define endl "\n"
#define need_speed                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;
int main()
{
    need_speed;
    int t, t1;
    cin >> t >> t1;
    string name, ip;
    map<string, string> mp;
    while (t--)
    {
        cin >> name >> ip;
        mp[ip] = name;
    }
    while (t1--)
    {
        cin >> name >> ip;
        ip.pop_back();
        cout<<name<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
}