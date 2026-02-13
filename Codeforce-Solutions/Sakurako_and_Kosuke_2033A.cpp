// Problem: Sakurako and Kosuke
// Links: https://codeforces.com/contest/2033/problem/A


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int pos = 0;
        int i = 1;
        bool st = true;

        while (true)
        {
            int move = 2 * i - 1;
            if (st)
            {
                pos -= move;
            }
            else
            {
                pos += move;
            }

            if (pos < -n || pos > n)
            {
                if (st)
                {
                    cout << "Sakurako" << endl;
                }
                else
                {
                    cout << "Kosuke" << endl;
                }
                break;
            }
            st = !st;
            i++;
        }
    }

    return 0;
}