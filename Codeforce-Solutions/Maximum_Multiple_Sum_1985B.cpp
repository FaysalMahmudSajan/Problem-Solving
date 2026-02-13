// Problem: Maximum Multiple Sum
// Links: https://codeforces.com/contest/1985/problem/B


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findOptimalX(int n) {
    int maxSum = 0;
    int optimalX = 2;
    
    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int sumMult = x * (k * (k + 1)) / 2;
        if (sumMult > maxSum) {
            maxSum = sumMult;
            optimalX = x;
        }
    }
    
    return optimalX;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;
    
    while (t--) {
        int n;
        cin >> n;
        results.push_back(findOptimalX(n));
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}