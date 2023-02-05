#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int *px = &x;
    int *px1;

    px1 = px;
    *px1 = 20;

    cout << *px <<endl;

    return 0;

}
