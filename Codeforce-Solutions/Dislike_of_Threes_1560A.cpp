// Problem: Dislike of Threes
// Links: https://codeforces.com/contest/1560/problem/A


#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int arr[1001];
int main(void)
{
    int t, t1 = 1000, x = 1, i = 1;
    while (i <= 1000)
    {
        if(!(x % 10 == 3 or x % 3 == 0))
        {
            arr[i++] = x;
        }
        x++;
    }
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << arr[x] << endl;
    }
}