#include <bits/stdc++.h>
using namespace std;

void conversion (string t)
{
    int hr1 = t[1] - '0';
    int hr2 = t[0] - '0';
    int hr = (hr2 * 10 + hr1 % 10);

    if (t[8] == 'A')
    {
        if (hr == 12)
        {
            cout << "00";
            for (int i=2; i <= 7; i++)
                cout << t[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                cout << t[i];
        }
    }
    else
    {
        if (hr == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << t[i];
        }
        else
        {
            hr = hr + 12;
            cout << hr;
            for (int i=2; i <= 7; i++)
                cout << t[i];
        }
    }
}

int main()
{
   string t ;
   cin>>t;
   conversion(t);
   return 0;
}