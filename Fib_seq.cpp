#include <iostream>
using namespace std;
int F[51];

int fib (int n)
{
    if (n <= 1)
    {
        return n;
    }

    if(F[n] != -1)
    {
        return F[n];
    }
   /*
    int F1,F2,F;

    F1 = 0;
    F2 = 1;
    for (int i = 2; i <= n; i++)
    {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
    }

    return F;
    */


    return fib(n-1) + fib(n-2);
}


int main()
{
    for (int i = 0; i < 51; i++)
    {
        F[i] = -i;
    }
    F[0] = 0, F[1] = 1;

    int n;
    cout << "Enter any number: ";
    cin >> n;

    int result = fib(n);
    cout << result;

    return 0;

}
