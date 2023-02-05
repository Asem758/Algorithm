#include <iostream>
using namespace std;


int main()
{
    int a = 3;
    int *b;

    b = &a;
    //int*b = &a;

    cout << "The address of a is: " << &a <<endl;
    cout << "The address of a is: " << b <<endl;
    cout << "The value of a is: " << a <<endl;
    cout << "The value of a is: " << *b <<endl;

    //Pointer to POinter


    int **c = &b;

    cout << "The address of b is: " << &b <<endl;
    cout << "The address of b is: " << c <<endl;
    cout << "The address of c is: " << *c <<endl;

    cout << "The value of a is: " << **c <<endl;

    return 0;
}

