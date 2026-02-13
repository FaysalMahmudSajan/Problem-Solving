// Problem: Chewbaсca and Number
// Links: https://codeforces.com/contest/514/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string number;
    cin >> number;
    if (number[0] >= '5' and number[0] < '9')
        number[0] = '0' + ('9' - number[0]);
    for (int i = 1; number[i] != '\0'; i++)
    {

        if (number[i] >= '5' and number[i] <= '9')
            number[i] = '0' + ('9' - number[i]);
    }
    cout << number << endl;
}