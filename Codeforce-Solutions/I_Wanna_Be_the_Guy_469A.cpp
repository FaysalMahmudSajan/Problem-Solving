// Problem: I Wanna Be the Guy
// Links: https://codeforces.com/contest/469/problem/A


#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int x;
    cin >> x;
    set<int> s;
    int a, b, c;
    cin >> a;
    while (a--)
    {
        cin >> c;
        s.insert(c);
    }
    cin >> b;
    while (b--)
    {
        cin >> c;
        s.insert(c);
    }
    if(s.size()==x)cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
}