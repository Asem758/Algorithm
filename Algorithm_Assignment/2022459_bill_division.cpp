#include<iostream>
using namespace std;

int main()
{
    int num,num1,c = 0,x,y,dif;

    cin>>num;
    cin>>num1;

    int arr[num];

    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];

        if(i == num1)
        {
            arr[i] = 0;
        }
        c += arr[i];
    }

    x = c/2;
    cin>>y;

    if(y>x)
    {
       dif = y-x;
       cout << dif <<endl;
    }
    else if(x == y)
    {
       cout<<"Bon Appetit"<<endl;
    }
    else
    {
        dif = x-y;
        cout <<dif <<endl;
    }
}
