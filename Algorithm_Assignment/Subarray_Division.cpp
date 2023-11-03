#include<iostream>
using namespace std;

int num,a,b,arr[105],count = 0;
int main()
{
    //int num,a,b,arr[105],count = 0;
    cin>>num;

    int arr1[num];

    for(int i = 1; i<=num; i++){
        cin>>arr1[i];

        arr[i] = arr[i-1] + arr1[i];
    }
    cin>>a>>b;

    for(int i = b; i<=num; i++)
    {
        if(arr1[i] - arr1[i-b] == a)
        {
            count++;
        }
    }

    cout<<count<<endl;
}
