// Problem: X Axis
// Links: https://codeforces.com/contest/1986/problem/A


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int point[3] = {x1, x2, x3};
        sort(point, point + 3);
        int median = point[1]; 
        int f_a = abs(point[0] - median) + abs(point[1] - median) + abs(point[2] - median);
        cout << f_a << endl;
    }
    return 0;
}