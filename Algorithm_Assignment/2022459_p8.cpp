#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    for(int i = 0; i<n; i++){
        cin>>k;
        if(k<38){
            cout<<k<<endl;
            continue;
        }
        int r = k%5;
        if(5 - r<3){
            k += 5-r;
        }
        cout<<k<<endl;
    }
}