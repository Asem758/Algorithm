#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int num1,num2, num3, count;

    for (int i = 0; i < num; i++)
    {
        count = 0;
        cin >> num2 >> num3;

        for(int i = 0; i < num2; i++)
        {
            cin >> num1;

            if (num1 <= 0)
            {
                count++;
            }
        }

        if (count < num3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
