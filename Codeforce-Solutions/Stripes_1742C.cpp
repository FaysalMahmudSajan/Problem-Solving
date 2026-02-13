// Problem: Stripes
// Links: https://codeforces.com/contest/1742/problem/C


#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    char ch;
    cin >> t;
    while (t--)
    {
        int r = 0, b = 0;
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        int Rrow = 0, Rcolum = 0, Brow = 0, Bcolum = 0;
        for (int i = 0; i < 8; i++)
        {
            Rrow = 0, Bcolum = 0;
            for (int j = 0; j < 8; j++)
            {
                if (arr[i][j] == 'R')
                    Rrow++;
                if (arr[j][i] == 'B')
                    Bcolum++;
            }
            if (Rrow == 8)
                r++;
            else if (Bcolum == 8)
                b++;
        }
        // cout << "B = " << b << " " << "R = " << r << endl;
        if (r > b)
            cout << 'R' << endl;
        else
            cout << 'B' << endl;
    }
}