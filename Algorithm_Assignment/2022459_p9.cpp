/*
#include<iostream>
using namespace std;
int main(){
    int n,count = 0,count1 = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int temp = 0;
    for(int i = 0; i<n; i++){
        if(temp>arr[i]){
            temp = arr[i];
        }
    }

    for(int i = 0; i<n; i++){
        if(temp<arr[i]){
            count++;
        }
        else if(temp>arr[i]){
            count1++;
        }
    }
    for(int i = 0; i<n; i++){
        if(count == count1){
            if(temp<<arr[i]){
             cout<<temp<<endl;
            }
        }
    }
}*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int m = 0, m1 = 0;
    for(int i = 1; i<=5; i++){
        if(arr[i]>m){
            m1 = i;
            m = arr[i];
        }
    }
    cout<<m1<<endl;
}