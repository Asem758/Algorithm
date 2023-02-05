#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,4,5,6,7,8,9};
    int item = 5;


    //Run time complexity: 0(logN)
    //Space Complexity: 0(1)
    int left, right, middle;

    left = 0;
    right = 7;

    while (left <= right)
    {
        middle = (left+ right)/2;

        if (a[middle] == item)
        {
            cout << "Item found at index: " << middle <<endl;
            return 0;
        }
        else if (a[middle] < item)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    cout << "Item not found " <<endl;

    return 0;
}
