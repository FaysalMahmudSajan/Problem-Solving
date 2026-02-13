// Problem: Manhattan Circle
// Links: https://codeforces.com/contest/1985/problem/D


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m; 
        vector<int> x, y;

        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < m; ++j) {
                if (row[j] == '#') {
                    x.push_back(i + 1); 
                    y.push_back(j + 1); 
                }
            }
        }

       
        nth_element(x.begin(), x.begin() + x.size() / 2, x.end());
        nth_element(y.begin(), y.begin() + y.size() / 2, y.end());
        int x_med = x[x.size() / 2];
        int y_med = y[y.size() / 2];

        cout << x_med << " " << y_med << endl; 
    }

    return 0;
}