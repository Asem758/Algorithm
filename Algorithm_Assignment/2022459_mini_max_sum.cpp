#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5, num1[5], sum1 = 0, a, s = 0;


    for(int i = 0; i <num; i++)
    {
        cin >> num1[i];
    }

    sort(num1, num1+5);

    for(int i = 0; i<num; i++)
    {
        a = num1[4];

        if(i == 4)
        {
          num1[i] = 0;
        }

        sum1 += num1[i];

        if(i == 4){
            num1[4] = a;
        }
    }

    sort(num1, num1+5, greater<int>());

    for(int i = 0; i<num; i++)
    {
        //n1[0] = a;
        if(i == 4)
        {
            num1[i] = 0;
        }

        s += num1[i];
    }

    cout <<sum1 <<" " << s;
}
