// Problem: Rank List
// Links: https://codeforces.com/contest/166/problem/A


#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

// bool cmp(pair<int, int> a, pair<int, int> b)
// {
//     if (a.first > b.first)
//         return true;
//     if (a.first == b.first)
//         return (a.second < b.second);
//     return false;
// }

int main(void)
{
    need_speed;
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({-x, y});
    }
    sort(v.begin(), v.end());
    int cnt = 0;
  //  cout << "--------------------------------------" << endl;
    for (auto u : v)
    {
     //   cout << u.first << " " << u.second << endl;
        if (u == v[k - 1])
            cnt++;
    }
    cout << cnt << endl;
}