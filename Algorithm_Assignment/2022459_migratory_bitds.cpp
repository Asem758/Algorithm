//npt accepted
#include<iostream>
using namespace std;
int main(){
    int n,n1,m,m1 = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>n1;
        arr[n1-1]++;

    }
    for(int i = 1; i<5; i++){
        if(arr[i]>arr[m]) m = i;
    }
    m1 = m+1;
    cout<<m1<<endl;
}