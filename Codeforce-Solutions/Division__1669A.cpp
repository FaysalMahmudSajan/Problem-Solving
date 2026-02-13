// Problem: Division?
// Links: https://codeforces.com/contest/1669/problem/A


#include <bits/stdc++.h>
// #define mp make_pair
#define IOS                       \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);
#define endl "\n"
#define ll long long
using namespace std;
// int cnt[100123];

void solve()
{
	int n;
	cin >> n;
	while (n--)
	{
		ll rating;
		cin >> rating;
		if (1900 <= rating)
			cout << "Division 1\n";
		else if (1600 <= rating and rating <= 1899)
			cout << "Division 2\n";
		else if (1400 <= rating and rating <= 1599)
			cout << "Division 3\n";
		else
			cout << "Division 4\n";
	}
}

int main()
{
	IOS solve();
	return 0;
}