// Problem: Next Round
// Links: https://codeforces.com/contest/158/problem/A


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[n], check;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    check = arr[k - 1];
    int cnt = 0;
    if (check != 0)
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= check and check != 0)
                cnt++;
        }
    else
    {
        for (int i = 0; i < n; i++)
            if (arr[i] != 0)
                cnt++;
    }
    cout << cnt << endl;
}