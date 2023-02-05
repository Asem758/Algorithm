#include <iostream>
using namespace std;

//Time Complexity : 0(n^2)
//Space Complexity : 0(1)

int main()
{
    int a[] = {-8, 4, 11, 3, 12};
    int i, value, hole;

    for (i = 1; i < 5; i++) //n
    {
        value = a[i];
        hole = i;

        while (hole > 0 && a[hole - 1] > value) //n
        {
            a[hole] = a[hole - 1];
            hole--;
        }

        a[hole] = value;
    }

    cout << "Sorted Array: \n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] <<endl;
    }


}
