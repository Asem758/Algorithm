#include <iostream>
using namespace std;

//Space Complexity: 0(1)

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even number: " << n <<endl;
    }
    else
    {
        cout << "Odd number: " << n <<endl;
    }

    return 0;

}
