#include<iostream>
using namespace std;
int main(){
    int n,d,m,arr1[105],count = 0;
    cin>>n;
    int arr[n];
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
        arr1[i] = arr1[i-1] + arr[i]; 
    }
    cin>>d>>m;
    for(int i = m; i<=n; i++){
        if(arr1[i] - arr1[i-m] == d){
            count++;
        }
    }
    cout<<count<<endl;
}