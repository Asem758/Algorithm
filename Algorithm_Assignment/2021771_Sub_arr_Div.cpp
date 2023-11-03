
#include <iostream>
using namespace std;

int num,a, b, arr1[105], arr2[105], c;

int main(){

    cin>>num;

    for(int i=1; i <= num; i++)
    {
        cin>>arr1[i];
        arr2[i]=arr2[i-1]+arr1[i];
    }
    cin >> a >> b;

    for(int i=b; i<=num; i++)
    {
        if(arr2[i] - arr2[i - b] == a)
        {
            c++;
        }
    }

    cout << c <<endl;

    return 0;
}
