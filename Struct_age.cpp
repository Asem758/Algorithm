#include <iostream>
using namespace std;

struct my_struct
{
    int age;
    double height;
};

int main()
{
    struct my_struct s1;

    s1.age = 22;
    s1.height = 5'5;

    struct my_struct *ps1;

    ps1 = &s1;

    //(*ps1).age = 24;

    ps1->age = 24;

    //(*ps1).height = 5'6;

    ps1->height = 5'6;

    cout << "Age is: " << s1.age <<endl;
    cout << "Height is: " << s1.height <<endl;

    return 0;
}
