#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num], arr1[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        arr1[i] = i + 1;

        for (int j = 0; j < num; j++)
        {
            if (arr1[i] == arr[j])
            {
                for (int k = 0; k < num; k++)
                {
                    if ((j + 1) == arr[k])
                    {
                        cout << k + 1 << endl;
                    }
                }
            }
        }
    }
    return 0;
}
