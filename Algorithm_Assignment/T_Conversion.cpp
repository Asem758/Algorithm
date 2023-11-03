#include <bits/stdc++.h>
using namespace std;

void conversion (string time)
{
    int hour1 = time[1] - '0';
    int hour2 = time[0] - '0';
    int hr = (hour2 * 10 + hour1 % 10);

    if (time[8] == 'A')
    {
        if (hr == 12)
        {
            cout << "00";
            for (int i=2; i <= 7; i++)
                cout << time[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                cout << time[i];
        }
    }
    else
    {
        if (hr == 12)
        {
            cout << "12";

            for (int i=2; i <= 7; i++)
                cout << time[i];
        }
        else
        {
            hr = hr + 12;
            cout << hr;

            for (int i=2; i <= 7; i++)
                cout << time[i];
        }
    }
}

int main()
{
   string time;
   cin>>time;

   conversion(time);
   return 0;
}
