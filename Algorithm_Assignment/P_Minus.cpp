
#include <iostream>
using namespace std;


int main() {
    int num, n, t;
    float positive = 0., negative = 0., zero = 0.;

    cin >> num;

    t = num;

    while (num--)
    {
        cin >> n;

        if (n > 0)
        {
            positive++;
        }

        else if (n < 0)
        {
            negative++;
        }

        else
        {
            zero++;
        }
    }

    cout << positive / t << endl;
    cout << negative / t << endl;
    cout << zero / t << endl;

    return 0;
}
