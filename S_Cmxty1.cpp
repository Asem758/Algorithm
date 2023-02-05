#include <iostream>
using namespace std;

//Space Complexity: 0(1)

int main()
{
    int i, n, even[101];

    for (i = 0; i < 101; i++)
    {
        even[i] = 0;
    }
    for (i = 0; i < 101; i += 2)
    {
        even[i] = 1;
    }

    cin >> n;

    if (even[n])
    {
        cout << "is even number: " << n <<endl;
    }
    else
    {
        cout << "is odd number: " << n <<endl;
    }

    return 0;
}
