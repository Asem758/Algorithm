#include <iostream>
using namespace std;

//Time Complexity: 0(n^2)

int main()
{
    int i, j, n, count;

    cout << "Enter the General number: ";
    cin>>n;

    count = 0;

    for (i = 0; i < n; i++)
    {
       for (j = 0; j < n; j++)
       {
           count = count + 1;
       }
    }

    for (i = 0; i < n; i++)
    {
        count = count + 1;
    }

    cout << "After the result: " << count <<endl;

    return 0;
}
