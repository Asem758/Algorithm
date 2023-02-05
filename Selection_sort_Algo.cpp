#include <iostream>
using namespace std;

int main()
{
    int a[] = {32,221,3,232,44,100,-7};
    int i,j, min_index;

    //outer loop to iterate over all the number

    for (int i = 0; i < 7; i++)
    {
         min_index = i;

         //Inner_Loop_to_find_the_mminimum_index

         for (int j = i + 1; j < 7; j++)
         {
             if (a[j] < a[min_index])
             {
                 min_index = j;
             }
         }

          //Swap two numbers (i, min_index)

    int temp = a[i];
    a[i] = a[min_index];
    a[min_index] = temp;

    }

    //Print_The_Sorted_Array

    for (int i = 0; i < 7; i++)
    {
        cout << a[i] <<endl;
    }

    return 0;
}
