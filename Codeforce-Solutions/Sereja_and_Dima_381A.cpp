// Problem: Sereja and Dima
// Links: https://codeforces.com/contest/381/problem/A


#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{
    // fast;
    need_speed;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1, S = 0, R = 0;
    for (int turn = 0; turn < n; turn++)
    {
        if (turn & 1)
        {
            if (arr[l] > arr[r])
            {
                R += arr[l];
                l++;
            }
            else
            {
                R += arr[r];
                r--;
            }
        }
        else
        {
            if (arr[l] > arr[r])
            {
                S += arr[l];
                l++;
            }
            else
            {
                S += arr[r];
                r--;
            }
        }
    }
    cout << S << " " << R << endl;
}