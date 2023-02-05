#include <iostream>
using namespace std;

int main()
{
    int n = 4, i, j, temp;
    int data[4] = {5,8,6,9};

    for (int i = 0; i < n; i++)
    {
        j = i;
        //ASC: Data[j] < Data[j-1]
        //DESC: Data[j] > Data[j-1]

        while(j > 0 && data[j] > data[j-1])
        {
            temp = data[j];
            data[j] = data[j-1];
            data[j-1] = temp;
        }

    }

    cout << "In ascending order: " <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << data[i] <<endl;
    }

    return 0;
}
