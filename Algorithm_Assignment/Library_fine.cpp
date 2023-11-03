#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int z1, s1, x1;
    cin >> z1 >> s1 >> x1;

    int z2, s2, x2;
    cin >> z2 >> s2 >> x2;

    if (x1 == x2)
    {
        if (s1 == s2)
        {
            if (z1 <= z2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 15 * (z1 - z2) << endl;
            }
        }
    else if (s1 < s2)
        {
            cout << 0 << endl;
        }
    else {
            cout << 500 * (s1 - s2) << endl;
         }
    }
    else if (x1 < x2)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 10000 << endl;
    }

    return 0;
}
