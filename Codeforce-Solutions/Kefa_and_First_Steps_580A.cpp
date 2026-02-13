// Problem: Kefa and First Steps
// Links: https://codeforces.com/contest/580/problem/A


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int max_length = 1, current_length = 1;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
            current_length++;
        else
        {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }
    max_length = max(max_length, current_length);
    cout << max_length << endl;
}