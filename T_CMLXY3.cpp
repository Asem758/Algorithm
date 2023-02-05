#include <iostream>
using namespace std;

//Time Complexity : 0(n^3)

int main()
{
    int i, n, count;

    cout << "Enter the general number: ";
    cin >> n;

    count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                count = count + 1;
            }
        }
    }

    cout << "After the result: " << count <<endl;

    return 0;
}
