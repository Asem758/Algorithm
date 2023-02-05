#include <iostream>
using namespace std;

//Time Complexity: 0(n^2)
//Space Complexity: 0(1)

void Bubble_sort (int A[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int B[5];

    cout << "Enter the 5 Array input: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> B[i];
    }

    Bubble_sort (B, 5);
}
