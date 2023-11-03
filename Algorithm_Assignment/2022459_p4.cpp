//array sum
#include<iostream>
using namespace std;

int a,sum = 0;

int main()
{
    int num;
    cin>>num;

    long int k[num];

    for(int i = 0; i<num; i++){
        cin >> k[i];
    }
    for(int i = 0; i<num; i++)
    {
        sum += k[i];
    }

    cout << sum <<endl;
}
