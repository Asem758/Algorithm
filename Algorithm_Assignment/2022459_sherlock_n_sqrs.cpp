#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int a,b,count = 0;
        cin>>a>>b;
        for(int i = 0; i<b; i++){
            if(i*i>b){
                break;
            }
            else if(i*i<=b && i*i >= a){
                count++;
            }
        }
        cout<<count<<endl;
    }
}