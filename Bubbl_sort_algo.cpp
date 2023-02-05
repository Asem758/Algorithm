#include <iostream>
using namespace std;

//time complexity: 0(n^2)
//Space Complexity: 0(1)

int main()
{
    int arr[] = {1,2,3,4,5};
    int i,j, size = 5;


    int swap;

    for (int i = 0; i < size - 1; i++)
    {
        swap = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
           if (arr[j] > arr[j + 1])
           {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               swap = 1;
           }
        }

        if (swap == 0)
        {
            break;
        }
    }

    cout << "\nAfter Sorting:\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<endl;
    }

    return 0;
}
