#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    for(int i = 0; i<num; i++)
    {
        int num1,num2,num3;
        cin>>num1; cin>>num2; cin>>num3;

        if(abs(num1-num3) < abs(num2-num3))
        {
            cout<<"Cat A"<<endl;
        }

        else if(abs(num2-num3) < abs(num1-num3))
        {
            cout<<"Cat B"<<endl;
        }

        else
        {
            cout<<"Mouse C"<<endl;
        }
    }
}
