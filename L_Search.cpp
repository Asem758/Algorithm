#include <iostream>
using namespace std;

int L_Search (int a[], int x, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }

    i = -1;

    return i;
}

int main()
{
    int i,

    int b[5];

    cout << "Enter 5 elements of the array: ";

    for (i = 0; i < 5; i++)
    {
       cin >> b[i];
    }

    int num;

    cout << "Enter element to search: ";
    cin >> num;


    L_Search(b[i], num);
}
