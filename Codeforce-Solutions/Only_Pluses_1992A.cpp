// Problem: Only Pluses
// Links: https://codeforces.com/contest/1992/problem/A



#include <iostream>
#include <algorithm>

using namespace std;

int maximizeProduct(int a, int b, int c, int moves) {
    int maxProduct = 0;
    for (int i = 0; i <= moves; i++) {
        for (int j = 0; j <= moves - i; j++) {
            int k = moves - i - j;
            int newA = a + i;
            int newB = b + j;
            int newC = c + k;
            maxProduct = max(maxProduct, newA * newB * newC);
        }
    }
    return maxProduct;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int maxBananas = maximizeProduct(a, b, c, 5);

        cout << maxBananas << endl;
    }

    return 0;
}