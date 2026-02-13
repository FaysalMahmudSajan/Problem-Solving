// Problem: Creating Words
// Links: https://codeforces.com/contest/1985/problem/A


#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << s2[0] << s1[1] << s1[2] << " " << s1[0] << s2[1] << s2[2] << endl;
    }
    return 0;
}