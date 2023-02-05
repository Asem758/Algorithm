#include<iostream>
using namespace std;

int linear_search (int arr[], int n, int x)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 8};
    int x = 5;

    int n = sizeof(arr) / sizeof(arr[0]);
    //linear_search(arr, n, x);

    cout << x << " is present at index " << linear_search(arr,n,x) <<endl;

    getchar();
    return 0;
}
