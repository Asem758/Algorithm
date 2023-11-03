#include <iostream>
using namespace std;
int main()
{
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1 - i; j >= 0;)
        {
            sum2 = sum2 + arr[i][j];
            break;
        }
    }
    cout << abs(sum1 -sum2) << endl;
}