// Problem: Sakurako and Water
// Links: https://codeforces.com/contest/2033/problem/B

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        
        int opt = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j] < 0) {

                    int delta = -a[i][j];
                    opt += delta;

                    for (int k = 0; k < n - max(i, j); ++k) {
                        if (i + k < n && j + k < n) {
                            a[i + k][j + k] += delta;
                        }
                    }
                }
            }
        }
        
        cout << opt << endl;
    }
    
    return 0;
}