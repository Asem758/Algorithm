#include <iostream>
using namespace std;

void Selection_Sort (int A[], int n)
{
   int i, j, index_min, temp;

   for (i = 0; i < n-i-1; i++)
   {
       index_min = i;

       for (j = i + 1; j < n; j++)
       {
           if (A[j] < A[index_min])
           {
               index_min = j;
           }
       }

       if (index_min != i)
       {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
       }
   }
}

int main()
{
    int B[5], i;

    cout << "Enter the Array input: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> B[i];
    }

    //int m;

   // cout << "Enter the 5 Array  number: ";
    //cin >> m;

    Selection_Sort (B,5);

    return 0;
}
