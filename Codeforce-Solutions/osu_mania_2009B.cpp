// Problem: osu!mania
// Links: https://codeforces.com/contest/2009/problem/B


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 4;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        stack<int> st;
        while (m--)
        {
            char arr[4];
            for (int i = 0; i < 4; i++)
                cin >> arr[i];
            for (int i = 0; i < 4; i++)
            {
                if (arr[i] == '#')
                    st.push(i + 1);
            }
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
}